#include "main.h"

/**
 * print_alphabet_x10 - Printing small lettets 10 times
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	char i;
	int j = 0;

	while (j < 10) 
	{
		i = 'a';
		while (i <= 'z')
		{
			_putchar(i);
			i++;
		}
		_putchar('\n');
		j++;
	}
}
