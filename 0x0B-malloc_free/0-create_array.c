#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of the given size
 * containing the char c at all of its indices
 * @size: size of the array
 * @c: a charachter
 *
 * Return: char *
 */
char *create_array(unsigned int size, char c)
{
	char *answer;
	unsigned int i = 0;

	answer = malloc(sizeof(char) * (size));
	if (size == 0 || answer == NULL)
	{
		return (NULL);
	}
	while (i < size)
	{
		answer[i] = c;
		i++;
	}
	answer[i] = 0;
	return (answer);
}
