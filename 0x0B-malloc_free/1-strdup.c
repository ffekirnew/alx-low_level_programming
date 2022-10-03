#include "main.h"
#include <stdlib.h>

/**
 * _strdup - duplicates the given string and
 * returns a pointer to the duplicate
 * @str: a string to be duplicated
 *
 * Return: char *
 */
char *_strdup(char *str)
{
	int size = 0;
	char *duplicate;

	while (str[size] > 0)
	{
		size++;
	}
	if (str == NULL || size == 0)
	{
		return (NULL);
	}

	duplicate = malloc(sizeof(char) * size);
	size = 0;
	while (str[size] > 0)
	{
		duplicate[size] = str[size];
		size++;
	}
	duplicate[size] = 0;
	return (duplicate);
}
