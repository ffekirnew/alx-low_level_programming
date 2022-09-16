#include "main.h"

/**
 * print_number - prints the given number n using _putchar
 * @n: any integer n
 *
 * Return: void
 */

void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = n * -1;
	}

	if (n < 10)
	{
		_putchar('0' + n);
	}
	else
	{
		print_number(n / 10);
		print_number(n % 10);
	}
}
