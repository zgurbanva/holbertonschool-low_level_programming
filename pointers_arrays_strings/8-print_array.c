#include <stdio.h>
#include "main.h"

/**
 * print_array - prints n elements of an integer array
 * @a: pointer to the first element of the array
 * @n: number of elements to print
 *
 * Description: Prints elements separated by ", " and ends with a newline.
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i != n - 1)
			printf(", ");
	}
	printf("\n");
}
