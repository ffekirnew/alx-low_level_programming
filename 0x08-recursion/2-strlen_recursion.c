#include "main.h"
#include <string.h>

/**
 * _strlen_recursion - returns the length of a string
 * @s: a string
 *
 * Return: an integer
 */
int _strlen_recursion(char *s)
{
	char next[500];

	if (s[0] == 0)
	{
		return (0);
	}
	else
	{
		strcpy(next, s + 1);
		return (1 + _strlen_recursion(next));
	}
}
