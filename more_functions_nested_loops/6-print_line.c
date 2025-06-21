#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: number of times to print the character '_'
 *
 * Description: Prints '_' n times followed by a newline.
 *              If n <= 0, prints only a newline.
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
