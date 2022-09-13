#include "main.h"

/**
 * times_table - prints the times table upto 9
 *
 * Return: void
 */
void times_table(void)
{
	int i, j, value;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			value = i * j;
			if (j != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (value < 10)
			{
				_putchar(' ');
				_putchar('0' + value);
			}
			else
			{
				_putchar('0' + value / 10);
				_putchar('0' + value % 10);
			}
		}
		_putchar('\n');
	}
}
