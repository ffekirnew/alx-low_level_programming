#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - adds a node to the front of a doubly-linked
 * list
 * @head: the head of the doubly-linked list
 * @n: the integer for the new node
 *
 * Return: the address of the new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	if (head == NULL)
	{
		*head = new_node;
		return (*head);
	}
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (*head);
}
