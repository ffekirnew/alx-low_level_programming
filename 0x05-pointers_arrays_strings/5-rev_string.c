#include "main.h"
#include <string.>

/**
 * rev_string - prints the inputted string in reverse
 * @s: any string poitner
 *
 * Return: void
 */
void rev_string(char *s)
{
	char reverse[500];
	int length = strlen(s) - 1;
	int index = 0;

	strcpy(reverse, s);
	while (index <= length)
	{
		reverse[index] = s[length - index];
		index++;
	}
	strcpy(s, reverse);
}
