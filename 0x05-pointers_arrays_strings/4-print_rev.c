#include "main.h"

/**
 * print_rev - prints the inputted string in reverse
 * @s: any string poitner
 *
 * Return: void
 */
void print_rev(char *s)
{
	int size;

	size = -1;
	while (s[size] != '\0')
	{
		size++;
	}
	while (size >= 0)
	{
		_putchar(s[size]);
		size--;
	}
	_putchar('\n');
}
