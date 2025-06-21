#include "main.h"

/**
 * _strncat - concatenates at most n bytes from src to dest
 * @dest: destination string to which src will be appended
 * @src: string to append to dest
 * @n: maximum number of bytes to use from src
 *
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	/* Find the end of dest string */
	while (dest[i] != '\0')
	{
		i++;
	}

	/* Append at most n bytes from src */
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	/* Add terminating null byte */
	dest[i] = '\0';

	return (dest);
}
