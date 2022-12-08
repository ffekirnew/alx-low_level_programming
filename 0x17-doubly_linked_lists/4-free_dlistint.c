#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - frees a doubly-linked list
 * @head: the head of the linked list to be freen
 *
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *prev;

	if (head == NULL)
		return;

	while (head->next != NULL)
	{
		prev = head;
		head = head->next;
		free(prev);
	}
	free(head);
}
