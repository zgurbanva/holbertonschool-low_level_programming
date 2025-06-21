#include <unistd.h>

/**
 * puts_half - prints the second half of a string, followed by a new line
 * @str: string to be printed from its half
 *
 * Description: If the string length is odd, prints the last (length + 1) / 2 characters.
 *              If the string length is even, prints the last half of the string.
 */
void puts_half(char *str)
{
	int length = 0, start;

	/* Calculate the length of the string */
	while (str[length] != '\0')
		length++;

	/* Calculate the starting index for the second half */
	start = (length + 1) / 2;

	/* Write the second half of the string */
	write(1, str + start, length - start);

	/* Write a newline character */
	write(1, "\n", 1);
}
