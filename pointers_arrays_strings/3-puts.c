#include "main.h"

/**
 * _puts - prints a string, followed by a new line, to stdout
 * @str: pointer to the string to print
 *
 * Description: Uses _putchar to print each character in the string.
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
