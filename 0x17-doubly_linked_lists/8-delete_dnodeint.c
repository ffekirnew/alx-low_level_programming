#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at the index
 * @head: the head of the doubly-linked list
 * @index: the index to be deleted
 *
 * Return: 1 suceess, -1 failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int n = 0;
	dlistint_t *prev;
	dlistint_t *iterator = head;

	while (n < index && iterator != NULL)
	{
		n++;
		prev = iterator;
		iterator = iterator->next;
	}
	if (n == index)
		prev->next = iterator->next;
		return (1);
	return (-1);
}
