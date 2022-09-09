#include <stdio.h>

/**
 *main - Entry point to the program
 *Return: Always 0 (Success)
 */
int main(void)
{
	int a;

	for (a = 97; a < 122; a++)
	{
		if (a != 101 && a != 113)
		{
			putchar(a);
		}
	}
	putchar(10);
	return (0);
}
