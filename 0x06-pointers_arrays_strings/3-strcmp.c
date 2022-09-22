#include "main.h"

/**
 * _strcmp - compares two strings
 *
 * @s1: string 1
 * @s2: string 2
 *
 * Return: an integer (0 for failure, 1 for success)
 */
int _strcmp(char *s1, char *s2)
{
	int s1_ind, s2_ind, result;

	s1_ind = 0;
	s2_ind = 0;
	result = 0;
	while ((s1[s1_ind] > 0 && s2[s2_ind] > 0) && (result == 0))
	{
		result += s1[s1_ind] - s2[s2_ind];
		s1_ind++;
		s2_ind++;
	}
	return (result);
}
