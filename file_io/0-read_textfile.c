#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

ssize_t read_textfile(const char *filename, size_t letters) {
    
    FILE *file;
    char *buffer;
    ssize_t bytesRead, bytesWritten;

    /* Check if filename is NULL */
    if (filename == NULL) {
        return (0);
    }
    
    /* Open the file */
    file = fopen(filename, "r");
    if (file == NULL) {
        return (0);
    }
    
    /* Allocate memory for buffer */
    buffer = (char *)malloc(letters + 1);  /* +1 for null terminator */
    if (buffer == NULL) {
        fclose(file);
        return (0);
    }
    
    /* Read from the file */
    bytesRead = fread(buffer, sizeof(char), letters, file);
    if (bytesRead <= 0) {
        free(buffer);
        fclose(file);
        return (0);
    }
    
    /* Null-terminate the string */
    buffer[bytesRead] = '\0';
    
    /* Write to standard output */
    bytesWritten = write(STDOUT_FILENO, buffer, bytesRead);
    if (bytesWritten < bytesRead) {
        free(buffer);
        fclose(file);
        return (0);
    }
    
    /* Clean up and return bytes written */
    free(buffer);
    fclose(file);
    return (bytesWritten);
}
