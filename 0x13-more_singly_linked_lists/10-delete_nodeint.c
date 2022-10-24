#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at the given index
 * @head: the head of the linked list
 * @index: the index of the node to be deleted
 *
 * Return: 1 for success, -1 for failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *current = *head;
	listint_t *prev = NULL;

	while (i < index && current != NULL)
	{
		i += 1;
		prev = current;
		current = current->next;
	}

	if (current == NULL || i < index)
		return (-1);

	else
	{
		if (prev == NULL)
			*head = current->next;
		else
			prev->next = current->next;
		free(current);
		return (1);
	}
}
