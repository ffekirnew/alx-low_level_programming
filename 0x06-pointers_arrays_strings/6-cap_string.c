#include "main.h"

/**
 * cap_string - capitalizes all words in a string
 * @a: a lower cased string
 *
 * Return: char *
 */
char *cap_string(char *a)
{
	int ind = 0;

	while (a[ind] > 0)
	{
		if (a[ind] > 96 && a[ind] < 123)
		{
			if (ind == 0)
			{
				a[ind] -= 32;
			}
			else if (a[ind - 1] > 31 && a[ind - 1] < 35)
			{
				a[ind] -= 32;
			}
			else if (a[ind - 1] > 8 && a[ind - 1] < 11)
			{
				a[ind] -= 32;
			}
			else if (a[ind - 1] > 39 && a[ind - 1] < 42)
			{
				a[ind] -= 32;
			}
			else if (a[ind - 1] == 123 || a[ind - 1] == 125)
			{
				a[ind] -= 32;
			}
			else if (a[ind - 1] == 46 || a[ind - 1] == 63)
			{
				a[ind] -= 32;
			}
		}
		ind++;
	}
	return (a);
}
