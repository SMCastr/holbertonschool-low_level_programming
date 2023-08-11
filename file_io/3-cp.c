#include "main.h"
#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#define BUFFER_SIZE 1024

/**
 * error_and_exit - Prints an error message and exits with the given code.
 * @exit_code: The exit code to use.
 * @format: The format string for the error message.
 */
void error_and_exit(int exit_code, const char *format, ...) {
	va_list args;
	va_start(args, format);
	dprintf(STDERR_FILENO, format, args);
	va_end(args);
	exit(exit_code);
}

/**
 * main - Copies the content of a file to another file.
 * @argc: The number of command-line arguments.
 * @argv: The array of command-line arguments.
 *
 * Return: 0 on success, or an appropriate error code on failure.
 */
int main(int argc, char *argv[]) {
	int fd_from, fd_to, bytes_read, bytes_written;
	char buffer[BUFFER_SIZE];

	/* Check if the correct number of arguments is provided */
	if (argc != 3)
		error_and_exit(97, "Usage: cp file_from file_to\n");

	/* Open the source file for reading */
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		error_and_exit(98, "Error: Can't read from file %s\n", argv[1]);

	/* Open or create the destination file for writing */
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
		error_and_exit(99, "Error: Can't write to %s\n", argv[2]);

	/* Read from the source file and write to the destination file */
	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0) {
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written == -1)
			error_and_exit(99, "Error: Can't write to %s\n", argv[2]);
	}

	/* Check for read errors */
	if (bytes_read == -1)
		error_and_exit(98, "Error: Can't read from file %s\n", argv[1]);

	/* Close both file descriptors */
	if (close(fd_from) == -1)
		error_and_exit(100, "Error: Can't close fd %d\n", fd_from);

	if (close(fd_to) == -1)
		error_and_exit(100, "Error: Can't close fd %d\n", fd_to);

	return (0);
}
