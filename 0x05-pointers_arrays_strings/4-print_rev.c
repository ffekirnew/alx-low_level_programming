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

	size = 0;
	while (s[size] != '\0')
	{
		size++;
	}
	while (size >= 0)
	{
		size--;
		_putchar(s[size]);
	}
	_putchar('\n');
}
