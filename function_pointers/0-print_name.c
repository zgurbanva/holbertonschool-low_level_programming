#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - Prints a name using a callback function
 * @name: The name to print
 * @f: Pointer to a function that takes a char * and returns void
 *
 * Description: If both name and function pointer are not NULL,
 *              calls the function pointed to by f with name as argument.
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
