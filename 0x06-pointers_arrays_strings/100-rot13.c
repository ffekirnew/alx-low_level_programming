#include "main.h"

/**
 * rot13 - rotates a string by 13 places
 * @a: a string
 *
 * Return: char *
 */
char *rot13(char *a)
{
	int ind = 0;

	while (a[ind] > 0)
	{
		while ((a[ind] >= 'a' && a[ind] <= 'z') || (a[ind] >= 'A' && a[ind] <= 'Z'))
		{
			if (a[ind] >= 'A' && a[ind] <= 'Z')
			{
				a[ind]  = (a[ind] - 65 + 13) % 26 + 65;
				break;
			}
			a[ind]  = (a[ind] - 97 + 13) % 26 + 97;
			break;
		}
		ind++;
	}
	return (a);
}
