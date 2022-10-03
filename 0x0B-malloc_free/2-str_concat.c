#include "main.h"
#include <stdlib.h>

/**
 * _strlen - calculates the size of a string
 * @str: the string
 *
 * Return: int
 */
int _strlen(char *str)
{
	int size = 0;

	while (str[size])
	{
		size++;
	}
	return (size);
}

/**
 * str_concat - concatenates two strings and
 * returns a pointer to the new string
 * @s1: first string
 * @s2: second string
 *
 * Return: array pointer
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	int i = 0, c = 0;

	concat = malloc(sizeof(char) * (_strlen(s1) + _strlen(s2)));
	if (concat == NULL)
	{
		return (NULL);
	}
	while (s1[i])
	{
		concat[c] = s1[i];
		i++;
		c++;
	}
	i = 0;
	while (s2[i])
	{
		concat[c] = s2[i];
		i++;
		c++;
	}
	concat[c] = 0;
	return (concat);
}
