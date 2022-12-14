#include "main.h"
/**
 * print_binary - prints the binary representation of numbers
 * @n: the number to be printed in binary
 *
 * Return: Nothing.
*/
void print_binary(unsigned long int n)
{
	if (!n)
		_putchar('0');
	else
	{
		if (n >> 1)
			print_binary(n >> 1);
		_putchar('0' + (n & 1));
	}
}
