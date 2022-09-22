
/**
 * rot13 - rotates a string by 13 places
 * @a: a string
 *
 * Return: char *
 */
char *rot13(char *a)
{
	/*char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int ind, a_ind;*/

	int ind = 0;
	while (a[ind] > 0)
	{
		while ((a[ind] >= 'a' && a[ind] <= 'z') || (a[ind] >= 'A' && a[ind] <= 'Z'))
		{
			if (a[ind] >= 'A' && a[ind] <= 'Z')
			{
				a[ind]  = (a[ind] - 65 + 13) % 26 + 65;
			}
			else
			{
				a[ind]  = (a[ind] - 97 + 13) % 26 + 97;
			}
			ind++;
		}
		ind++;
	}
	return (a);
}
