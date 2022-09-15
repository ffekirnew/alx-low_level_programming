#include "main.h"

/**
 * _isdigit - checks if the inputed charachter is and uppercase or a lower case
 * @c: any charachter c
 *
 * Return: 1 for success, 0 for failure
 */
int _isdigit(int c)
{
	if (c > 47 && c < 58)
	{
		return (1);
	}
	return (0);
}
