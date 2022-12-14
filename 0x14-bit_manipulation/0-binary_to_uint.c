#include "main.h"

/**
 * to_the_power - increases the 2 to the given power
 * @power: the power to raise 2 to
 *
 * Return: an int
*/
int to_the_power(int power)
{
	int answer = 1;
	int i;

	for (i = 0; i < power; i++)
	{
		answer *= 2;
	}
	return (answer);
}

/**
 * binary_to_uint - converts a binary number to an integer
 * @b: the binary number consisting of 0s and 1s
 *
 * Return: and unsigned int or 0 for failure
*/
unsigned int binary_to_uint(const char *b)
{
	int length = 0, power = 0, answer = 0, number;

	if (b == NULL)
		return (0);
	while (b[length])
		length++;
	length--;
	while (length >= 0)
	{
		if (b[length] != '0' && b[length] != '1')
			return (0);
		number = (b[length] == '0') ? 0 : 1;
		answer += to_the_power(power) * number;
		length--;
		power++;
	}
	return (answer);
}
