#include "main.h"

/**
 * string_toupper - changes all lower case letters to upper case
 * @a: a lower cased string
 *
 * Return: char *
 */
char *string_toupper(char *a)
{
	int ind = 0;

	while (a[ind] > 0)
	{
		if (a[ind] > 96 && a[ind] < 123)
		{
			a[ind] -= 32;
		}
		ind++;
	}
	return (a);
}
