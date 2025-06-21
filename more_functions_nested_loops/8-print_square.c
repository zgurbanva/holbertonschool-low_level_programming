#include "main.h"

/**
 * print_square - prints a square of size 'size' using '#' characters
 * @size: the size of the square
 *
 * Description: Prints a square of '#' characters followed by a new line.
 *              If size <= 0, prints only a new line.
 */
void print_square(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
			_putchar('#');

		_putchar('\n');
	}
}
