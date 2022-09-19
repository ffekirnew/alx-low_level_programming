#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: a charachter string
 *
 * Return: an integer
 */
int _strlen(char *s)
{
	int size;

	size = 0;
	while ((s[size]) != '\0')
	{
		size++;
	}
	return (size);
}

/**
 * puts_half - prints the second half of a string
 * @str: a charachter string
 *
 * Return: void
 */
void puts_half(char *str)
{
	int index, size;

	size = _strlen(str);
	index = (size % 2 == 0) ? size / 2 : (size - 1) / 2 + 1;
	while (str[index] > 0)
	{
		_putchar(str[index]);
		index++;
	}
	_putchar('\n');
}
