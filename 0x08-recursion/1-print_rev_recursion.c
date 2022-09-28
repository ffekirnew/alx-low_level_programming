#include "main.h"
#include <string.h>

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: a string
 *
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	char next[500];
	size_t end;

	end = strlen(s);
	if (end > 0)
	{
		strncpy(next, s, end - 1);
		next[end - 1] = 0;
		_putchar(s[end - 1]);
		_print_rev_recursion(next);
	}
}
