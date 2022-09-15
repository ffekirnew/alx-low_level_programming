#include "main.h"

/**
 * print_square - draws a square in the terminal
 * @n: an integer determining the size of the square
 *
 * Return: void
 */
void print_square(int n)
{
	int height, width;

	if (n > 0)
	{
		for (height = 0; height < n; height++)
		{
			for (width = 0; width < n; width++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
