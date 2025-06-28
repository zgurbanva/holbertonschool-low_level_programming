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
	int result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	result = multiply(argv[1], argv[2]);
	printf("%d\n", result);

	return (0);
}

/**
 * multiply - Multiplies two string arguments converted to integers
 * @num1: First number as string
 * @num2: Second number as string
 *
 * Return: Result of multiplication
 */
int multiply(char *num1, char *num2)
{
	int a = atoi(num1);
	int b = atoi(num2);

	return (a * b);
}
