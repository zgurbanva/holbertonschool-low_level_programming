#include "main.h"

/**
 * print_diagonal - draws a diagonal line in the terminal
 * @n: number of times to print the character '\'
 *
 * Description: Prints a diagonal line using '\' characters.
 *              Each '\' is shifted one space to the right on each line.
 *              Prints only '\n' if n <= 0.
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < n; i++)
	{
		/* print spaces before '\' */
		for (j = 0; j < i; j++)
			_putchar(' ');

		_putchar('\\');
		_putchar('\n');
	}
}
