#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - prints the passed strings using the
 * string separater
 * @separator: separator string
 * @n: the number of the arguments passed
 *
 * Return: Nothing.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list p, q;

	va_start(p, n);
	va_copy(q, p);
	for (i = 0; i < n; i++)
	{
		if (va_arg(p, char *) != NULL)
			printf("%s", va_arg(q, char *));
		else
			printf("(nil)");

		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(p);
	va_end(q);
}
