#include "main.h"
#include <string.h>

/**
 * _strcpy - modifies the value of one of the strings and returns that value
 * @dest: a string
 * @src: a string
 *
 * Return: char
 */
char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);
	return (dest);
}
