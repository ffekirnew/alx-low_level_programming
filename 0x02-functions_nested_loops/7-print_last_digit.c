#include "main.h"

/**
 * print_last_digit - returns and prints the last letter of a given number
 * @n: any number
 *
 * Return: A positive int
 */
int print_last_digit(int n)
{
	int value;

	value = n % 10;
	if (value > 0)
	{
		_putchar('0' + value);
		return (value);
	}
	else
	{
		_putchar('0' + (-1 * value));
		return (-1 * value);
	}
}
