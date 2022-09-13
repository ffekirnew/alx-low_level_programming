#include "main.h"
#include <stdio.h>

/**
 * _abs - returns the numbers between the passed n and the number 98
 * @n: any number
 *
 * Return: void
 */
 void print_to_98(int n)
 {
 	int start, factor;

	if (n != 98)
	{
		start = n;
		factor = (n < 98) ? 1 : -1 ;
		while (start != 98)
		{
			printf("%d, ", start);
			start = start + factor;
		}
	}
	printf("%d\n", 98);
 }
