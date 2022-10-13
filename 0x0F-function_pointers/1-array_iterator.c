#include <stddef.h>

/**
 * array_iterator - iterates an array of values to do action
 * @array: the array of pointers to functions
 * @size: the size of the array
 * @action: the function pointer to do the work
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
