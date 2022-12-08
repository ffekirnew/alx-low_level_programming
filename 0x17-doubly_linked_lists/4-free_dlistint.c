#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * free_dlistint - frees a doubly-linked list
 * @head: the head of the linked list to be freen
 *
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *prev;

	while (head != NULL)
	{
		prev = head;
		head = head->next;
		free(prev);
	}
	free(head);
}
