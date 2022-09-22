#include "main.h"

/**
 * _strncpy - copies a string from src to dest
 *
 * @dest: destinarion string
 * @src: source string
 * @n: an integer
 *
 * Return: char *
 */
char *_strncpy(char *dest, char *src, int n)
{
	int dest_ind, src_ind;

	dest_ind = 0;
	src_ind = 0;
	while (src[src_ind] > 0 && src_ind < n)
	{
		dest[dest_ind] = src[src_ind];
		dest_ind++;
		src_ind++;
	}
	return (dest);
}
