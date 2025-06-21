#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: pointer to the string to convert
 *
 * Return: the converted integer, or 0 if no digits found
 *
 * Description:
 *  - Handles multiple leading '+' and '-' signs
 *  - Converts digits until non-digit found
 *  - Uses unsigned int to avoid overflow during accumulation
 *  - Correctly handles INT_MIN (-2147483648)
 */
int _atoi(char *s)
{
	unsigned int num = 0;
	int sign = 1, i = 0, found_digit = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			sign *= -1;
		else if (s[i] == '+')
			; /* ignore plus sign */
		else if (s[i] >= '0' && s[i] <= '9')
		{
			found_digit = 1;
			num = num * 10 + (s[i] - '0');
		}
		else if (found_digit)
			break;
		i++;
	}

	if (!found_digit)
		return (0);

	if (sign == -1)
	{
		if (num == 2147483648U)
			return (-2147483648);
		if (num > 2147483648U)
			return (0);
		return (-(int)num);
	}

	if (num > 2147483647U)
		return (2147483647);

	return ((int)num);
}
