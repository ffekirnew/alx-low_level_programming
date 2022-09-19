#include "main.h"
#include <stdio.h>

/**
 * print_array - prints elements of an array separated by a comma and a space
 * @a: an integer array
 * @n: the size of the integer array
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int index;

	for (index = 0; index < n; index++)
	{
		printf("%d", a[index]);
		if (index < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
