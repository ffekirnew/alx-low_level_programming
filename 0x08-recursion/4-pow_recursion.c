#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to y
 * @x: the base of the exponentiation
 * @y: the power of the exponentiation
 *
 * Return: an integer
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
