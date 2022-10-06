#include <stdlib.h>

/**
 * _calloc - allocates a space for the given
 * member size and element size
 * @nmemb: no. of members of the array
 * @size: size of each element in the array
 *
 * Return: void *
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *answer = malloc(nmemb * size);

	if (nmemb == 0 || size == 0 || answer == NULL)
	{
		return (NULL);
	}
	return (answer);
}
