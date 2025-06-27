#include "main.h"

/**
 * _is_prime_helper - helper function to check for prime recursively
 * @n: number to check
 * @divisor: current divisor to test
 *
 * Return: 1 if prime, 0 if not
 */
int _is_prime_helper(int n, int divisor)
{
	if (divisor * divisor > n)
		return (1); /* no divisors found, so prime */

	if (n % divisor == 0)
		return (0); /* divisible by divisor, not prime */

	return (_is_prime_helper(n, divisor + 1));
}

/**
 * is_prime_number - returns 1 if n is prime, otherwise 0
 * @n: number to check
 *
 * Return: 1 if prime, 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (_is_prime_helper(n, 2));
}
