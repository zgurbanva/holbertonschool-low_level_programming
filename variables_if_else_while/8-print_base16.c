#include <stdio.h>

/**
 * main - Prints all the numbers of base 16 in lowercase,
 *        followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int i;

    for (i = 0; i < 16; i++)
    {
        if (i < 10)
            putchar(i + '0');      /* Print digits 0 to 9 */
        else
            putchar(i - 10 + 'a'); /* Print letters a to f */
    }
    putchar('\n');                  /* Print new line */

    return (0);
}
