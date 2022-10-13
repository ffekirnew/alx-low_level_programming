#include <stdlib.h>
#include <stdio.h>

/**
 * print_opcodes - prints opcodes
 * @a: address of main function
 * @n: number of bytes
 *
 * Return: Nothing.
 */
void print_opcodes(char *a, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		printf("%.2hhx", a[i]);
		if (i < n - 1)
		{
			printf(" ");
		}
		i++;
	}
	printf("\n");
}

/**
 * main - prints the opcodes of the main functions
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: always O
 */
int main(int argc, char *argv[])
{
	int n;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	n = atoi(argv[1]);
	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}
	print_opcodes((char *)&main, n);
	return (0);
}
