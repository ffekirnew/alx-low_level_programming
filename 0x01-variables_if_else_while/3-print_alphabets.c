#include <stdio.h>

/**
 *main - Entry point to the program
 *Return: Always 0 (Success)
 */
int main(void)
{
	int a;

	for (a = 97; a < 123; a++)
	{
		printf("%c", a);
	}
	for (a = 65; a < 90; a++)
	{
		printf("%c", a);
	}
	printf("%c\n", a);
	return (0);
}
