#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>

/**
 * print_error - Prints an error message and exits with a given code
 * @exit_code: The code to exit with
 * @format: Format string (for dprintf)
 * @arg: File name or fd to include in the message
 */
void print_error(int exit_code, const char *format, const char *arg)
{
	dprintf(STDERR_FILENO, format, arg);
	exit(exit_code);
}

/**
 * main - Copies the content of one file to another
 * @ac: Argument count
 * @av: Argument vector
 *
 * Return: 0 on success, exits with appropriate code on failure
 */
int main(int ac, char **av)
{
	int fd_from, fd_to, r, w;
	char buffer[1024];

	if (ac != 3)
		print_error(97, "Usage: cp file_from file_to\n", "");

	fd_from = open(av[1], O_RDONLY);
	if (fd_from == -1)
		print_error(98, "Error: Can't read from file %s\n", av[1]);

	fd_to = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		close(fd_from);
		print_error(99, "Error: Can't write to %s\n", av[2]);
	}

	while ((r = read(fd_from, buffer, 1024)) > 0)
	{
		w = write(fd_to, buffer, r);
		if (w != r)
		{
			close(fd_from);
			close(fd_to);
			print_error(99, "Error: Can't write to %s\n", av[2]);
		}
	}

	if (r == -1)
	{
		close(fd_from);
		close(fd_to);
		print_error(98, "Error: Can't read from file %s\n", av[1]);
	}

	if (close(fd_from) == -1)
		print_error(100, "Error: Can't close fd %d\n", av[1]);

	if (close(fd_to) == -1)
		print_error(100, "Error: Can't close fd %d\n", av[2]);

	return (0);
}
