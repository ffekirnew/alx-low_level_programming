#include "lists.h"

/**
 * get_nodeint_at_index - gets the node at the given index in the
 * linked list
 * @head: the head of the list
 * @index: the index of the node wanted
 *
 * Return: a pointer to a node at the required index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (i < index && head != NULL)
	{
		i += 1;
		head = head->next;
	}

	return (head);
}
