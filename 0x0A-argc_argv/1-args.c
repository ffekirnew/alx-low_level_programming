#include <stdio.h>

/**
 * main - prints the number of arguments passed
 * @argc: the number of arguments passed
 * @argv: an array containing string arguments
 *
 * Return: Always 0 (for success)
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
