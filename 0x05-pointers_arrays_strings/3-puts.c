#include "main.h"

/**
 * _puts - prints the inputted string onto the standard output
 * @str: a string pointer
 *
 * Return: void
 */
void _puts(char *str)
{
	int index;

	index = 0;
	while (str[index] != 0)
	{
		_putchar(str[index]);
		index++;
	}
	_putchar('\n');
}
