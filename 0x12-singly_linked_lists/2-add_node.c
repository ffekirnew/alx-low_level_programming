#include "lists.h"
#include <string.h>
#include <stdio.h>

/**
 * add_node - adds a node
 * @head: the head of the linked list to add a node too
 * @str: the string value of the node
 *
 * Return: a list_t pointer
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));
	int len = strlen(str);
	char *string = strdup(str);

	new->str = string;
	new->len = len;
	new->next = *head;
	*head = new;
	return (*head);
}
