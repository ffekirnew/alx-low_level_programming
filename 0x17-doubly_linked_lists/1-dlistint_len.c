#include "lists.h"

/**
 * dlistint_len - returns the length of a doubly-linked list
 * @h: the head of the doubly-linked list
 *
 * Return: size int
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		n++;
		h = h->next;
	}
	return (n);
}
