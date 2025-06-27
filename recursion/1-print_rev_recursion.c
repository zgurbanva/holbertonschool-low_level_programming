#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse using recursion
 * @s: pointer to the string to print
 *
 * Description: Recursively prints the string starting from the end.
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')  /* base case */
		return;

	_print_rev_recursion(s + 1);  /* go to the end first */
	_putchar(*s);                 /* print on the way back */
}
