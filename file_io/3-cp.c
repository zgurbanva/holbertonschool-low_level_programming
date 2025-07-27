#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#define BUF_SIZE 1024

void error_exit(int code, const char *msg, const char *arg);

/**
 * error_exit - Prints error message to STDERR and exits.
 * @code: Exit code.
 * @msg: Error message.
 * @arg: Extra argument for format (nullable).
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
 * main - Copies content from file_from to file_to.
 * @ac: Argument count.
 * @av: Argument vector.
 *
 * Return: 0 on success, or exits with error code.
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

	r = read(fd_from, buf, BUF_SIZE);
	if (r == -1)
		error_exit(98, "Error: Can't read from file %s\n", av[1]);

	fd_to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
		error_exit(99, "Error: Can't write to %s\n", av[2]);

	while (r > 0)
	{
		w = write(fd_to, buf, r);
		if (w != r)
			error_exit(99, "Error: Can't write to %s\n", av[2]);
		r = read(fd_from, buf, BUF_SIZE);
		if (r == -1)
			error_exit(98, "Error: Can't read from file %s\n", av[1]);
	}

	if (close(fd_from) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from), exit(100);
	if (close(fd_to) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to), exit(100);

	return (0);
}
