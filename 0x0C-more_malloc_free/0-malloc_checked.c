#include <stdlib.h>

/**
 * malloc_checked - allocates a space using malloc
 * @b: the size of the space needed
 *
 * Return: void pointer *
 */
void *malloc_checked(unsigned int b)
{
	void *answer = malloc(b);

	if (answer == NULL)
	{
		exit(98);
	}
	else
	{
		return answer;
	}
}
