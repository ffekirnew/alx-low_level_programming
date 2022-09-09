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
		printf("%c", a);
	}
	printf("%c\n", a);
	return (0);
}
