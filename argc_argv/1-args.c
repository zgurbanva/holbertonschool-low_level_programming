#include <stdio.h>
#include "main.h"

/**
 * main - Entry point of the program
 * @argc: Argument count
 * @argv: Argument vector (unused)
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", count_args(argc));
	return (0);
}

/**
 * count_args - Counts the number of arguments passed to the program
 * @argc: Total count including the program name
 *
 * Return: Number of arguments excluding the program name
 */
int count_args(int argc)
{
	return (argc - 1);
}
