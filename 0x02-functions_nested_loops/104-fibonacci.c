#include <stdio.h>

/**
 * main - computes and prints the first 98 fibonacci numbers
 *
 * Return: Success (0)
 */
int main(void)
{
	unsigned long f1 = 1;
	unsigned long f2 = 2;
	unsigned long auxiliary;
	int count;

	printf("1, 2, ");

	for (count = 0; count < 95; count++)
	{
		auxiliary = f1 + f2;
		printf("%ld, ", auxiliary);
		f1 = f2;
		f2 = auxiliary;
	}
	printf("%ld\n", f1 + f2);
	return (0);
}
