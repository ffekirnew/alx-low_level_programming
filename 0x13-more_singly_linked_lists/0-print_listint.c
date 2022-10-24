#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints a singly-linked list of integers
 * @h: the head of the linked list
 *
 * Return: Nothing.
 */
size_t print_listint(const listint_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		len += 1;
		h = h->next;
	}
	return (len);
}
