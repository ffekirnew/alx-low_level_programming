#include "lists.h"

/**
 * list_len - returns the length of a linked list
 * @h: the head of the linked list
 *
 * Return: the length of the string
 */
size_t list_len(const list_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		len += 1;
		h = h->next;
	}
	return (len);
}
