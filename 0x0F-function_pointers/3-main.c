#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main - calculates what the user types in
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Nothing
 */
int main(int argc, char *argv[])
{
	int (*ptr)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	ptr = get_op_func(argv[2]);
	if (atoi(argv[3]) == 0 && (ptr == op_div || ptr == op_mod))
	{
		printf("Error\n");
		exit(100);
	}
	else if (ptr != NULL)
	{
		printf("%d\n", (ptr(atoi(argv[1]), atoi(argv[3]))));
		return (0);
	}
	printf("Error\n");
	exit(99);
}
