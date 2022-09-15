#include <stdio.h>

/**
 * main - prints the numbers from 0 - 100 following fizz buzz rules
 *
 * Return: Always 0
 */
int main(void)
{
	int counter;

	for (counter = 1; counter < 101; counter++)
	{
		if (counter % 3 == 0 && counter % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (counter % 3 == 0)
		{
			printf("Fizz");
		}
		else if (counter % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", counter);
		}
		printf(" ");
	}
	printf("\n");
	return (0);
}
