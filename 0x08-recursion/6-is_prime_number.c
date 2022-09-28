#include "main.h"

/**
 * prime_number_check_brute_force - checks for
 * being a prime using brute force
 * @a: int starting point
 * @b: int the square
 *
 * Return: success 1, failure 0
 */
int prime_number_check_brute_force(int a, int b)
{
	if (a == b)
	{
		return (1);
	}
	else if (b % a == 0)
	{
		return (0);
	}
	else
	{
		return (prime_number_check_brute_force(a + 1, b));
	}
}

/**
 * is_prime_number - checks if a given number is
 * a prime number
 * @n: any integer n
 *
 * Return: success 1, failure 0
 */
int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	else
	{
		return (prime_number_check_brute_force(2, n));
	}
}
