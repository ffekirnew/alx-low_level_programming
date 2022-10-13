/**
 * int_index - searches for an integer
 * @size: number of elements in the array
 * @cmp: the function to be used for searching
 * @array: the array of integers
 *
 * Return: int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index, result;

	if (size < 0)
	{
		return (-1);
	}
	for (index = 0; index < size; index++)
	{
		result = cmp(array[index]);
		if (result != 0)
		{
			return (index);
		}
	}
	return (-1);
}
