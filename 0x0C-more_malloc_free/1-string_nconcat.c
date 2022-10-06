#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: length to be concatenated
 *
 * Return: char * (a string)
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	size_t size_1, size_2;
	unsigned int index = 0, counter = 0;
	char *answer;

	size_1 = strlen(s1);
	size_2 = strlen(s2);
	answer = ((int) size_2 < (int) n) ? malloc(size_1 + size_2 + 1) : malloc(size_1 + n + 1);
	if (answer == NULL)
	{
		return (NULL);
	}

	while (s1[counter])
	{
		answer[index] = s1[counter];
		counter++;
		index++;
	}
	counter = 0;
	while (s2[counter] && counter < n)
	{
		answer[index] = s2[counter];
		counter++;
		index++;
	}
	answer[counter] = 0;
	return (answer);
}
