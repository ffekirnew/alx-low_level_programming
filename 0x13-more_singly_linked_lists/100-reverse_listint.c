#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: the head of the list to be reversed
 *
 * Return: the head of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *curr = *head;

	while (curr != NULL)
	{
		*head = curr->next;
		curr->next = prev;
		prev = curr;
		curr = *head;
	}
	*head = prev;
	return (*head);
}
