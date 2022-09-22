#include "main.h"

/**
 * reverse_array - reverses an array of integers
 *
 * @a: an array of integers
 * @n: the length of a
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int copy[2000];
	int index = 0;

	while (index < n)
	{
		copy[index] = a[index];
		index++;
	}
	while (index >= 0)
	{
		a[index] = copy[n - index - 1];
		index--;
	}
}
