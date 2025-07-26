#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * close_file - Closes a file descriptor.
 * @fd: The file descriptor to be closed.
 */
void close_file(int fd)
{
	int c;

	c = close(fd);
	if (c == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Copies the contents of a file to another file.
 * @argc: Argument count.
 * @argv: Argument vector (file_from and file_to).
 *
 * Return: 0 on success, otherwise exits with specified codes.
 */
int main(int argc, char *argv[])
{
	int from_fd, to_fd, r_bytes, w_bytes;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO,
			"Usage: cp file_from file_to\n");
		exit(97);
	}

	from_fd = open(argv[1], O_RDONLY);
	if (from_fd == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	to_fd = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (to_fd == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", argv[2]);
		close_file(from_fd);
		exit(99);
	}

	while (1)
	{
		r_bytes = read(from_fd, buffer, 1024);
		if (r_bytes == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			close_file(from_fd);
			close_file(to_fd);
			exit(98);
		}
		if (r_bytes == 0)
			break;

		w_bytes = write(to_fd, buffer, r_bytes);
		if (w_bytes == -1 || w_bytes != r_bytes)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			close_file(from_fd);
			close_file(to_fd);
			exit(99);
		}
	}

	close_file(from_fd);
	close_file(to_fd);
	return (0);
}
