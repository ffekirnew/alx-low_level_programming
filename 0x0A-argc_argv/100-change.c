#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the name of the program
 * @argc: the number of arguments passed
 * @argv: an array containing string arguments
 *
 * Return: Always 0 (for success)
 */
int main(int argc, char *argv[])
{
	int coins[5] = {25, 10, 5, 2, 1};
	int user_num, answer = 0, coin_index = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	user_num = atoi(argv[1]);
	while (user_num > 0)
	{
		if (user_num >= coins[coin_index])
		{
			user_num -= coins[coin_index];
			answer++;
		}
		else
		{
			coin_index++;
		}
	}
	printf("%d\n", answer);
	return (0);
}
