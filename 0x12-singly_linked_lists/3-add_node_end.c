#include "lists.h"
#include <string.h>
#include <stdio.h>

/**
 * add_node_end - adds a node at the end of the list_t
 * @head: the head of the linked list to add the new node too
 * @str: the string value of the node
 *
 * Return: a list_t pointer
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new = (list_t *) malloc(sizeof(list_t));
	list_t *last = *head;

	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (last->next != NULL)
		last = last->next;
	last->next = new;

	return (new);
}
