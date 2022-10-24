#include "lists.h"

/**
 * add_nodeint - adds a node to the end of a linked list
 * @head: the head of the linked list
 * @n: the data of the new node
 *
 * Return: a pointer to the newly created node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = (listint_t *) malloc(sizeof(listint_t));
	if (new_node != NULL)
	{
		new_node->n = n;
		new_node->next = *head;
	}
	*head = new_node;

	return (*head);
}
