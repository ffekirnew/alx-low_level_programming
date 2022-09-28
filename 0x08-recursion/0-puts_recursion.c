#include "main.h"
#include <string.h>

/**
 * _puts_recursion - prints a string onto the screen
 * but uses recursion
 * @s: a string
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
	char next[500];

	if (s[0] == 0)
	{
		_putchar('\n');
	}
	else
	{
		_putchar(s[0]);
		strcpy(next, s + 1);
		_puts_recursion(next);
	}
}
