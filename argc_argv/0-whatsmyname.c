#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints its own name, followed by a new line.
 * It does not remove the path before the name, and will print the new name
 * even if the program is renamed, without recompilation.
 *
 * @argc: The number of command-line arguments (unused)
 * @argv: An array of strings containing the command-line arguments
 *        argv[0] holds the name of the program
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	(void)argc;

	printf("%s\n", argv[0]);

	return (0);
}
