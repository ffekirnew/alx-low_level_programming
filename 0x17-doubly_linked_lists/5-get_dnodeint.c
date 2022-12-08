#include "lists.h"

/**
 * get_dnodeint_at_index - returns the node at the given index
 * @head: the head of the linked list
 * @index: the index required
 *
 * Return: the node at the index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int n = 0;

	while (n < index && head != NULL)
	{
		n++;
		head = head->next;
	}
	if (n == index)
		return (head);
	return (NULL);
}
