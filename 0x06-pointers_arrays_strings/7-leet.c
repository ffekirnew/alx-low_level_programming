#include "main.h"

/**
 * leet - converts a string into stylyzed text
 * @a: a string
 *
 * Return: char *
 */
char *leet(char *a)
{
	int ind = 0;

	while (a[ind] > 0)
	{
		while (a[ind] == 'a' || a[ind] == 'A')
		{
			a[ind] = '4';
			ind++;
		}
		while (a[ind] == 'e' || a[ind] == 'E')
		{
			a[ind] = '3';
			ind++;
		}
		while (a[ind] == 't' || a[ind] == 'T')
		{
			a[ind] = '7';
			ind++;
		}
		while (a[ind] == 'l' || a[ind] == 'L')
		{
			a[ind] = '1';
			ind++;
		}
		while (a[ind] == 'o' || a[ind] == 'O')
		{
			a[ind] = '0';
			ind++;
		}
		ind++;
	}
	return (a);
}
