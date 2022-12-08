#include "lists.h"

/**
 * add_dnodeint_end - adds a node to the end of a doubly-
 * linked list
 * @head: the head of the linked list
 * @n: the data to the new node
 *
 * Return: the address of the new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *iterator = *head;

	if (dlistint_t == NULL)
		return (NULL)
	new_node->n = n;
	new_node->next = NULL;
	while (iterator->next != NULL)
		iterator = iterator->next;
	iterator->next = new_node;
	new_node->previous = iterator;
	return (*new_node);
}
