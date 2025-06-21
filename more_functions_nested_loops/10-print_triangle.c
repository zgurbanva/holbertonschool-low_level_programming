#include "main.h"

/**
 * print_triangle - prints a triangle using '#' characters
 * @size: the size of the triangle
 *
 * Description: Prints a triangle aligned to the right.
 *              If size <= 0, prints only a new line.
 */
void print_triangle(int size)
{
	int row, space, hash;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (row = 1; row <= size; row++)
	{
		for (space = size - row; space > 0; space--)
			_putchar(' ');

		for (hash = 1; hash <= row; hash++)
			_putchar('#');

		_putchar('\n');
	}
}
