#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: the head of the linked list to be freed
 *
 * Return: Nothing.
 */
void free_listint(listint_t *head)
{
	listint_t *prev;

	while (head != NULL)
	{
		prev = head;
		head = head->next;
		free(prev);
	}
}
