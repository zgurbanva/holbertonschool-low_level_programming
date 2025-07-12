#include "3-calc.h"

/**
 * get_op_func - Selects the correct operation function
 * @s: The operator as string
 *
 * Return: Pointer to the function corresponding to the operator, or NULL if not found
 *
 * Restrictions:
 * - No switch, no for/do/while loops, no goto, no else
 * - Only one if statement and one while loop allowed
 */
int (*get_op_func(char *s))(int, int)
{
	int i = 0;

	/* Array of operators and corresponding functions */
	char ops[] = {'+', '-', '*', '/', '%'};
	int (*functions[])(int, int) = {op_add, op_sub, op_mul, op_div, op_mod};

	/* One while loop to check operators */
	while (i < 5)
	{
		if (s[0] == ops[i] && s[1] == '\0')
			return (functions[i]);
		i++;
	}
	return (NULL);
}
