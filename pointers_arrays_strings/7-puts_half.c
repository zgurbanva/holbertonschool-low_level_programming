#include "main.h"

/**
 * puts_half - prints the second half of a string
 * @str: pointer to the string to print half of
 *
 * Description: If the string length is odd,
 * prints (length + 1) / 2 characters from the middle.
 * Then prints a newline.
 */
void puts_half(char *str)
{
	int len = 0, i;

	while (str[len] != '\0')
		len++;

	if (len % 2 == 0)
		i = len / 2;
	else
		i = (len + 1) / 2;

	for (; i < len; i++)
		_putchar(str[i]);

	_putchar('\n');
}
