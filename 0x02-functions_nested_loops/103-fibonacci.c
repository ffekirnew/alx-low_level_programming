#include <stdio.h>

/**
 * main - will print the sum of even fibonnaci numbers under 4000000
 *
 * Return: Success (0)
 */
int main(void)
{
	long int sum, f1, f2, auxiliary;

	f1 = 1;
	f2 = 2;
	sum = 2;
	while (f2 < 4000000)
	{
		auxiliary = f1 + f2;
		if (auxiliary % 2 == 0)
		{
			sum += auxiliary;
		}
		f1 = f2;
		f2 = auxiliary;
	}
	printf("%ld\n", sum);
	return (0);
}
