#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: Name of the file.
 * @text_content: NULL terminated string to add at the end of the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, bytes_written, length = 0;

	/* Check if filename is NULL */
	if (filename == NULL)
		return (-1);

	/* Open the file in append mode */
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	/* Return success if text_content is NULL */
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}

	/* Calculate the length of the text_content */
	while (text_content[length])
		length++;

	/* Write the content to the file */
	bytes_written = write(fd, text_content, length);
	if (bytes_written == -1)
	{
		close(fd);
		return (-1);
	}

	/* Close the file and return success */
	close(fd);
	return (1);
}
