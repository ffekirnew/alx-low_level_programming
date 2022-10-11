#include <stdio.h>

/**
 * main - prints the file it was compiled fron
 *
 * Return: 0 for success, 1 for failure
 */
int main(void)
{
	char *name = __FILE__;

	if (name == NULL)
	{
		return (1);
	}
	printf("%s\n", name);
	return (0);
}
