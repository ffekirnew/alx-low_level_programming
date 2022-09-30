#include <stdio.h>

/**
 * main - prints all the arguments passed
 * @argc: the number of arguments passed
 * @argv: an array containing string arguments
 *
 * Return: Always 0 (for success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
