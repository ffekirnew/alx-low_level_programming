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
	duplicate = malloc(sizeof(char) * size);
	size = 0;

	if (str == NULL || duplicate == NULL)
	{
		return (NULL);
	}
	while (str[size] > 0)
	{
		duplicate[size] = str[size];
		size++;
	}
	duplicate[size] = 0;
	return (duplicate);
}
