#include "main.h"
#include <string.h>

/**
 * wildcmp - checks if two strings are similar
 * @s1: string 1
 * @s2: string 2
 *
 * Return: 1 for success, 0 for failure
 */
int wildcmp(char *s1, char *s2)
{
	char s_1[500], s_2[500];

	if (s2[0] == '*' && s2[1] == '*')
	{
		strcpy(s_2, s2 + 1);
		return (wildcmp(s1, s_2));
	}
	else if ((s2[0] != '*' && s1[0] != s2[0]) || (s2[0] == '*' && s1[0] == 0 && s2[1] != 0))
	{
		return (0);
	}
	else if ((s2[0] == '*' && s1[0] == 0 && s2[1] == 0) || (s1[0] == 0 && s2[0] == 0))
	{
		return (1);
	}
	else
	{
		if (s1[0] == s2[0])
		{
			strcpy(s_1, s1 + 1);
			strcpy(s_2, s2 + 1);
			return (wildcmp(s_1, s_2));
		}
		else if (s2[0] == '*' && s1[0] == s2[1])
		{
			strcpy(s_2, s2 + 1);
			return (wildcmp(s1, s_2));
		}
		else
		{
			strcpy(s_1, s1 + 1);
			return (wildcmp(s_1, s2));
		}
	}
}
