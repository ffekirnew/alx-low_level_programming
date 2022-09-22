#include "main.h"

/**
 * _strncat - concatenates the two strings passed,
 * but uses at most n bytes from n
 * @dest: string 1
 * @src: string 2
 * @n: an integer demarking how many bytes will be used from src
 *
 * Return: char *
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_ind, src_ind;

	dest_ind = 0;
	src_ind = 0;
	while (dest[dest_ind] > 0)
	{
		dest_ind++;
	}
	while (src[src_ind] > 0 && src_ind < n)
	{
		dest[dest_ind] = src[src_ind];
		dest_ind++;
		src_ind++;
	}
	return (dest);
}
