#include "main.h"

/**
 * leet - converts a string into stylyzed text
 * @a: a string
 *
 * Return: char *
 */
char *leet(char *a)
{
	char chars[] = "a4A4e3E3l1L1o0O0t7T7";
	int a_ind, chars_ind;

	a_ind = 0;
	while (a[a_ind] > 0)
	{
		chars_ind = 0;
		while (chars[chars_ind] > 0)
		{
			if (chars[chars_ind] == a[a_ind])
			{
				a[a_ind] = chars[chars_ind + 1];
				break;
			}
			chars_ind++;
		}
		a_ind++;
	}
	return (a);
}
