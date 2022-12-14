#include "main.h"

/**
 * print_number - prints an integer
 * @n: an integer to be printed
 *
 * Return: void
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	if (n < 10)
	{
		_putchar('0' + n);
	}
	else
	{
		print_number(n / 10);
		_putchar('0' + n % 10);
	}
}
