#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a node to a linked list at the
 * given index
 * @head: the head of the linked list
 * @idx: the index to put the node in
 * @n: the data for the new node
 *
 * Return: the pointer to the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *new_node;
	listint_t *current = *head;
	listint_t *previous;

	new_node = (listint_t *) malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	while (i < idx && current != NULL)
	{
		i += 1;
		previous = current;
		current = current->next;
	}
	if (i == idx)
	{
		new_node->n = n;
		new_node->next = current;
		previous->next = new_node;
		return (new_node);
	}
	else
		return (NULL);
}
