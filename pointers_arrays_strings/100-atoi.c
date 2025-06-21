#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: pointer to the string to convert
 *
 * Return: the converted integer, or 0 if no digits found
 *
 * Description:
 *  - Skips all non-digit characters until it finds digits or signs
 *  - Counts the number of '-' signs to determine the sign of the number
 *  - Converts subsequent digits to int until a non-digit is found
 *  - If no digits, returns 0
 */
int _atoi(char *s)
{
	int i = 0, sign = 1, num = 0, found_digit = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			sign *= -1;
		else if (s[i] == '+')
		{
			/* sign unchanged */
		}
		else if (s[i] >= '0' && s[i] <= '9')
		{
			found_digit = 1;
			num = num * 10 + (s[i] - '0');
		}
		else if (found_digit)
			break; /* digits ended */
		i++;
	}

	if (!found_digit)
		return 0;

	return sign * num;
}
