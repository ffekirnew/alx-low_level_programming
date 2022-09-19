#include "main.h"
#include <stdio.h>

/**
 * _strlen - returns the length of a string
 * @s: a charachter string
 *
 * Return: an integer
 */
int _strlen(char *s)
{
	int size, index;

	index = 0;
	size = 0;
	while ((s[index]) != '\0')
	{
		index++;
		size++;
	}
	return (size);
}
