#include "function_pointers.h"

/**
 * int_index - Searches for an integer in an array
 * @array: The array to search
 * @size: The number of elements in the array
 * @cmp: A pointer to the function used to compare values
 *
 * Description: Iterates through the array and returns the index of the first
 *              element for which the cmp function does not return 0.
 *              Returns -1 if no match is found or if size <= 0.
 *
 * Return: Index of the first match, or -1 if not found or invalid input
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}

	return (-1);
}
