#include <stdio.h>

void turtle_and_hare(void) __attribute__ ((constructor));

/**
 * turtle_and_hare - prints a custome message before the main
 * function is run
 *
 * Return: Nothing.
 */
void turtle_and_hare(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
