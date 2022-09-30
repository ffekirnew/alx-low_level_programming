#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies the two numbers passed
 * @argc: the number of arguments passed
 * @argv: an array containing string arguments
 *
 * Return: 0 - for success, 1 - for failure
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
