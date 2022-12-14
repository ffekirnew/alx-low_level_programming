#include "main.h"
#include <stdio.h>

/**
 * to_binary - converts an int to a binary string
 * @n: the number to be converted
 *
 * Return: the string or NULL if malloc failed
*/
char *to_binary(int n)
{
	int length = 0, n_copy = n;
	char *binary;

	while (n_copy)
	{
		length++;
		n_copy /= 2;
	}
	binary = malloc(sizeof(char) * length);
	if (binary == NULL)
		return (NULL);
	length--;
	while (n)
	{
		binary[length] = '0' + n % 2;
		n /= 2;
		length--;
	}
	return (binary);
}

/**
 * get_bit - returns the bit at the given index
 * @n: the number
 * @index: the index
 *
 * Return: int for success, -1 for failure
*/
int get_bit(unsigned long int n, unsigned int index)
{
	char *binary = to_binary(n);
	int digit, length = 0, n_copy = n;

	while (n_copy)
	{
		n_copy /= 2;
		if (!n_copy)
			break;
		length++;
	}
	if (binary == NULL)
		return (-1);
	digit = binary[length - index] - 48;
	free(binary);
	return (digit);
}
