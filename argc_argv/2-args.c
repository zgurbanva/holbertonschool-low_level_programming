#include <stdio.h>
#include "main.h"

/**
 * main - Entry point of the program
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	print_args(argc, argv);
	return (0);
}

/**
 * print_args - Prints each argument on a new line
 * @argc: Number of arguments
 * @argv: Array of argument strings
 */
void print_args(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
}
