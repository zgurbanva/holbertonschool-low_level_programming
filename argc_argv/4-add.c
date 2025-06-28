#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Entry point of the program
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	int sum;

	sum = add_positive_numbers(argc, argv);

	if (sum == -1)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", sum);
	return (0);
}

/**
 * add_positive_numbers - Adds only positive integers from arguments
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: Sum of numbers or -1 if error
 */
int add_positive_numbers(int argc, char *argv[])
{
	int i, sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (!is_positive_number(argv[i]))
			return (-1);
		sum += atoi(argv[i]);
	}
	return (sum);
}

/**
 * is_positive_number - Checks if a string contains only digits
 * @str: Input string
 *
 * Return: 1 if string is a positive number, 0 otherwise
 */
int is_positive_number(char *str)
{
	int i = 0;

	if (str[0] == '\0')
		return (0);

	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}

	return (1);
}
