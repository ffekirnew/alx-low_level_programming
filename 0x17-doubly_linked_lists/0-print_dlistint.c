#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - prints all elements in a doubly-linked list
 * @h: the head of the doubly-linked list
 * 
 * Return: the number of elements in the doubly-linked list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		n++;
		printf("%d", h->n);
	}
	printf("-> %ld elements", n);
	return (n);
}