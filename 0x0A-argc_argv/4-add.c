#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds an prints the sum of the
 * numbers passed
 * @argc: the number of arguments passed
 * @argv: an array containing string arguments
 *
 * Return: 0 - for success, 1 - for failure
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (argv[i][0] > 47 && argv[i][0] < 58)
		{
			sum += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
