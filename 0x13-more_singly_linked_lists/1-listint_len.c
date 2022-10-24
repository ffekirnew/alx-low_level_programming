#include "lists.h"

/**
 * listint_len - counts the elements in a linked list
 * @h: the head of the linked list
 *
 * Return: the length of the linked list
 */
size_t listint_len(const listint_t *h)
{
	size_t length = 0;

	while (h != NULL)
	{
		h = h->next;
		length += 1;
	}
	return (length);
}
