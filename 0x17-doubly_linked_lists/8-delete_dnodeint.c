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
	dlistint_t *iterator = *head;

	if (!index)
	{
		prev = iterator->next;
		return (1);
	}
	while (n < index && iterator != NULL)
	{
		n++;
		prev = iterator;
		iterator = iterator->next;
	}
	if (n == index)
	{
		if (iterator->next != NULL)
			prev->next = iterator->next;
		else
			prev->next = NULL;
		return (1);
	}
	return (-1);
}
