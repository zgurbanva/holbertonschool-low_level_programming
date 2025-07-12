#include "3-calc.h"
#include <stddef.h>

/**
 * get_op_func - Selects the correct function for the given operator
 * @s: Operator string
 *
 * Return: Pointer to the function that corresponds to the operator, or NULL if none
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op)
	{
		if (s[0] == ops[i].op[0] && s[1] == '\0')
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
