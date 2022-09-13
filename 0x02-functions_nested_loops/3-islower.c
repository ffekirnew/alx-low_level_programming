#include "main.h"

/**
 * _islower - checks if the given letter c is a small letter
 *
 * Return: Success 1, Failure 0
 */
int _islower(int c)
{
	if ((c <= 'z') && (c >= 'a'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
