#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#define BUF_SIZE 1024

void error_exit(int code, const char *msg, const char *arg);
void safe_close(int fd);

/**
 * error_exit - Prints error message to STDERR and exits.
 * @code: Exit code.
 * @msg: Error message format string.
 * @arg: Extra string argument for message (nullable).
 */
void error_exit(int code, const char *msg, const char *arg)
{
	if (arg)
		dprintf(STDERR_FILENO, msg, arg);
	else
		dprintf(STDERR_FILENO, "%s", msg);
	exit(code);
}

/**
 * safe_close - Closes a file descriptor with error checking.
 * @fd: The file descriptor to close.
 */
void safe_close(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Copies content of a file to another file.
 * @ac: Argument count.
 * @av: Argument vector.
 *
 * Return: 0 on success, or exit with appropriate error code.
 */
int main(int ac, char **av)
{
	int fd_from, fd_to, r, w;
	char buf[BUF_SIZE];

	if (ac != 3)
		error_exit(97, "Usage: cp file_from file_to\n", NULL);

	fd_from = open(av[1], O_RDONLY);
	if (fd_from == -1)
		error_exit(98, "Error: Can't read from file %s\n", av[1]);

	fd_to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		safe_close(fd_from);
		error_exit(99, "Error: Can't write to %s\n", av[2]);
	}

	while ((r = read(fd_from, buf, BUF_SIZE)) > 0)
	{
		w = write(fd_to, buf, r);
		if (w != r)
		{
			safe_close(fd_from);
			safe_close(fd_to);
			error_exit(99, "Error: Can't write to %s\n", av[2]);
		}
	}

	if (r == -1)
	{
		safe_close(fd_from);
		safe_close(fd_to);
		error_exit(98, "Error: Can't read from file %s\n", av[1]);
	}

	safe_close(fd_from);
	safe_close(fd_to);
	return (0);
}
