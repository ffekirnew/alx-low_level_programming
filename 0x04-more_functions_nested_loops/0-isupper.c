#include "main.h"

/**
 * _isupper - checks if the inputed charachter is and uppercase or a lower case
 * @c: any charachter c
 *
 * Return: 1 for success, 0 for failure
 */
int _isupper(int c)
{
	if (c > 64 && c < 91)
	{
		return (1);
	}
	return (0);
}
