#include "main.h"

/**
 * _isalpha - checks if the given charachter is an alpha charachter
 * @c: any character c
 *
 * Return: Success 1, Failure 0
 */
int _isalpha(int c)
{
	if (((c <= 'z') && (c >= 'a')) || ((c <= 'Z') && (c >= 'A')))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
