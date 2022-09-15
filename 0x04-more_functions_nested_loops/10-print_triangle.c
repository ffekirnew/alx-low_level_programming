#include "main.h"

/**
 * print_triangle - prints a triangle onto the terminal
 * @size: the height and width of the triangle
 *
 * Return: void
 */
void print_triangle(int size)
{
	int height, space, hashtag;

	if (size > 0)
	{
		for (height = 0; height < size; height++)
		{
			for (space = size - height - 1; space > 0; space--)
			{
				_putchar(' ');
			}
			for (hashtag = height + 1; hashtag > 0; hashtag--)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
