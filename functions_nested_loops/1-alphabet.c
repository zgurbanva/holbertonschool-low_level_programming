#include "main.h"

/**
 * print_alphabet - prints the lowercase alphabet followed by a new line
 */
void print_alphabet(void)
{
	char letters[] = "abcdefghijklmnopqrstuvwxyz\n";
	int i = 0;

	while (letters[i] != '\0')
	{
		_putchar(letters[i]);
		i++;
	}
}
