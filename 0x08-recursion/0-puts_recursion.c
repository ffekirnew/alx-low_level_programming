#include "main.h"

/**
 * _puts_recursion - prints a string onto the screen
 * but uses recursion
 * @s: a string
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (s[0] == 0)
	{
		_putchar('\n');
	}
	else
	{
		char next[500];
		int ind = 1;

		_putchar(s[0]);
		while (s[ind] > 0)
		{
			next[ind-1] = s[ind];
			ind++;
		}
		next[ind-1] = 0;
		_puts_recursion(next);
	}
}
