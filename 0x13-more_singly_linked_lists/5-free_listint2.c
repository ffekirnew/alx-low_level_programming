#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: the head of the linked list to be freed
 *
 * Return: Nothing.
 */
void free_listint2(listint_t **head)
{
	listint_t *prev;
	listint_t *last = *head;

	while (last != NULL)
	{
		prev = last;
		last = last->next;
		free(prev);
	}
	free(last);
	*head = NULL;
}
