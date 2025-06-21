#include "main.h"

/**
 * more_numbers - Prints numbers from 0 to 14, 10 times,
 *               each followed by a new line.
 *
 * Description: Uses _putchar only three times in the code.
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j > 9)
				_putchar('1');
			_putchar('0' + (j % 10));
		}
		_putchar('\n');
	}
}
