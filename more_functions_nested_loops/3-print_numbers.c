#include "main.h"

/**
 * print_numbers - Prints the numbers from 0 to 9 followed by a new line.
 *
 * Description: Uses only _putchar twice to print numbers and a newline.
 */
void print_numbers(void)
{
    int i;

    for (i = 0; i < 10; i++)
    {
        _putchar('0' + i);
    }
    _putchar('\n');
}
