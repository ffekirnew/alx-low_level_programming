#include "main.h"
#include <math.h>

/**
 * sqrt_brute_force - checks for being a squareroot
 * using brute force
 * @a: int starting point
 * @b: int the square
 *
 * Return: an integer
 */
int sqrt_brute_force(int a, int b)
{
	if (a == b)
	{
		return (-1);
	}
	else if (a * a == b)
	{
		return (a);
	}
	else
	{
		return (sqrt_brute_force(a + 1, b));
	}
}

/**
 * _sqrt_recursion - returns the natural squareroot of an integer
 * @n: an integer
 *
 * Return: a signed integer
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (0);
	}
	else
	{
		return (sqrt_brute_force(1, n));
	}
}
