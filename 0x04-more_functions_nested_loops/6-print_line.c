#include "main.h"

/**
 * print_line - draws a line in the terminal
 * @n: an integer determining the size of the line
 *
 * Return: void
 */
void print_line(int n)
{
	int counter;

	if (n > 0)
	{
		for (counter = 0; counter < n; counter++)
		{
			_putchar(95);
		}
	}
	_putchar(10);
}
