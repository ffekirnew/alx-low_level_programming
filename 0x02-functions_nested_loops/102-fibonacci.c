#include <stdio.h>

/**
 * main - computes and prints the first 50 fibonacci numbers
 *
 * Return: Success (0)
 */
int main(void)
{
	long int f1 = 1;
	long int f2 = 2;
	long int auxiliary;
	int count;

	printf("1, 2, ");

	for (count = 0; count < 47; count++)
	{
		printf("%ld, ", f1 + f2);
		auxiliary = f1 + f2;
		f1 = f2;
		f2 = auxiliary;
	}
	printf("%ld\n", f1 + f2);
	return(0);
}
