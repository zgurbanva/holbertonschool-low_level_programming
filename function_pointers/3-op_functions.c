#include "3-calc.h"

/**
 * op_add - Returns the sum of two integers.
 * @a: First integer
 * @b: Second integer
 *
 * Return: The sum of a and b.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Returns the difference of two integers.
 * @a: First integer
 * @b: Second integer
 *
 * Return: The difference of a and b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Returns the product of two integers.
 * @a: First integer
 * @b: Second integer
 *
 * Return: The product of a and b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Returns the quotient of two integers.
 * @a: First integer (dividend)
 * @b: Second integer (divisor)
 *
 * Return: The quotient of a divided by b.
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Returns the remainder of the division of two integers.
 * @a: First integer (dividend)
 * @b: Second integer (divisor)
 *
 * Return: The remainder of a divided by b.
 */
int op_mod(int a, int b)
{
	return (a % b);
}
