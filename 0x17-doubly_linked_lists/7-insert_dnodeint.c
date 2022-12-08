#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a node at the given index
 * @head: the head of the linked list
 * @idx: the index required
 * @counter: the new node to be added
 *
 * Return: the node at the index
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *iterator = *h;
	unsigned int counter = 0;

	if (new_node == NULL)
		return (NULL);
	while (counter < idx && iterator != NULL)
	{
		counter++;
		iterator = iterator->next;
	}
	if (counter == idx)
	{
		new_node->n = n;
		new_node->next = iterator;
		iterator = new_node;
		return (iterator);
	}
	return (NULL);
}
