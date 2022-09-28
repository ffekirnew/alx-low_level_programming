#include "main.h"
#include <string.h>

/**
 * is_palindrome - identifies if a string in a palindrome
 * or not
 * @s: a string
 *
 * Return: 1 for success, 0 for failure
 */
int is_palindrome(char *s)
{
	char next[500];
	int start, end;

	if (s[0] == 0 || s[1] == 0)
	{
		return (1);
	}
	else
	{
		start = 0;
		end = strlen(s) - 1;
		if (s[start] != s[(int) end])
		{
			return (0);
		}
		strncpy(next, s + 1, end - 1);
		next[end - 1] = 0;
		return (is_palindrome(next));
	}
}
