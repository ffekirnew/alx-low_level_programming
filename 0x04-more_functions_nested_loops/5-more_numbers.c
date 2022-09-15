#include "main.h"

/**
 * more_numbers - prints the numbers from 0 to 14
 * Return: void
 */
void more_numbers(void)
{
	int a, b;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 15; b++)
		{
			if (b > 9)
			{
				_putchar('1');
			}
			_putchar('0' + b % 10);
		}
		_putchar(10);
	}
}
