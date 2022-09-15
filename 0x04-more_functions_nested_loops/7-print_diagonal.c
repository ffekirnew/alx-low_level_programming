#include "main.h"

/**
 * print_diagonal - draws a diagonal in the terminal
 * @n: an integer determining the size of the diagonal
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int digCounter, spaceCounter;

	if (n > 0)
	{
		for (digCounter = 0; digCounter < n; digCounter++)
		{
			for (spaceCounter = 0; spaceCounter < digCounter; spaceCounter++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
