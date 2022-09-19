#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: any string containing numbers
 *
 * Return: an integer
 */
int _atoi(char *s)
{
	int sign, index, result, started;

	sign = 1;
	index = 0;
	result = 0;
	started = 0;
	while (s[index] > 0)
	{
		if (s[index] == '-' && started == 1)
		{
			break;
		}
		else if (s[index] == '-' && started == 0)
		{
			sign *= -1;
		}
		else if ((s[index] > 57 || s[index] < 48) && started == 1)
		{
			break;
		}
		else if (s[index] < 58 && s[index] > 47)
		{
			started = 1;
			result *= 10;
			result += s[index] - 48;
		}
		index++;
	}
	return (sign * result);
}
