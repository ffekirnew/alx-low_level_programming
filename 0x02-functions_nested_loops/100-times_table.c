#include "main.h"

/**
 * print_times_table - prints the times table upto the passed n
 * @n: any int n
 *
 * Return: void
 */
void print_times_table(int n)
{
	int i, j, value;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				value = i * j;
				if (j != 0)
				{
					_putchar(',');
					_putchar(' ');
				}
				if (j == 0)
				{
					_putchar('0');
				}
				else if (value < 10)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + value);
				}
				else if (value < 100)
				{
					_putchar(' ');
					_putchar('0' + value / 10);
					_putchar('0' + value % 10);
				}
				else
				{
					_putchar('0' + value / 100);
					_putchar('0' + (value % 100) / 10);
					_putchar('0' + (value % 100) % 10);
				}
			}
			_putchar('\n');
		}
	}
}
