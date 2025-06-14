#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet 10 times, in lowercase
 */
void print_alphabet_x10(void)
{
	int line = 0;
	char letters[] = "abcdefghijklmnopqrstuvwxyz\n";

	while (line < 10)
	{
		int i = 0;

		while (letters[i] != '\0')
		{
			_putchar(letters[i]);
			i++;
		}
		line++;
	}
}
