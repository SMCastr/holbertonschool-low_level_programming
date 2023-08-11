#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * exit_with_error - Handles error conditions and exits the program.
 * @code: The exit code to use.
 * @msg: The error message to print.
 * @filename: The filename associated with the error message.
 */
void exit_with_error(int code, const char *msg, const char *filename)
{
	dprintf(STDERR_FILENO, msg, filename);
	exit(code);
}

/**
 * main - Copies the content of a file to another file.
 * @argc: The number of arguments.
 * @argv: An array of pointers to the arguments.
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to, rd, wr;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		exit_with_error(98, "Error: Can't read from file %s\n", argv[1]);

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		close(fd_from);
		exit_with_error(99, "Error: Can't write to %s\n", argv[2]);
	}
	while ((rd = read(fd_from, buffer, 1024)) > 0)
	{
		wr = write(fd_to, buffer, rd);
		if (wr == -1)
		{
			close(fd_from);
			close(fd_to);
			exit_with_error(99, "Error: Can't write to %s\n", argv[2]);
		}
	}
	if (rd == -1)
	{
		close(fd_from);
		close(fd_to);
		exit_with_error(98, "Error: Can't read from file %s\n", argv[1]);
	}
	if (close(fd_from) == -1)
		exit_with_error(100, "Error: Can't close fd %d\n", argv[1]);

	if (close(fd_to) == -1)
		exit_with_error(100, "Error: Can't close fd %d\n", argv[2]);
	return (0);
}
