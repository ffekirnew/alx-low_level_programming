#include "main.h"

/**
 * _strcat - concatenates the two strings passed
 * @dest: string 1
 * @src: string 2
 *
 * Return: char *
 */
char *_strcat(char *dest, char *src)
{
	int dest_ind, src_ind;

	dest_ind = 0;
	src_ind = 0;
	while (dest[dest_ind] > 0)
	{
		dest_ind++;
	}
	while (src[src_ind] > 0)
	{
		dest[dest_ind] = src[src_ind];
		dest_ind++;
		src_ind++;
	}
	return (dest);
}
