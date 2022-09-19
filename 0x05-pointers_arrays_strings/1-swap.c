#include "main.h"

/**
 * swap_int - takes in two pointers and swaps the values they point to
 * @a: integer pointer 1
 * @b: integer pointer 2
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
