#include "main.h"

/**
 * _abs - returns the absolute values of the numbers passed
 * @n: any number
 *
 * Return: A positive int
 */
int _abs(int n)
{
	int value;

	if (n > 0)
	{
		return (n);
	}
	else
	{
		value = n * -1;
		return (value);
	}
}
