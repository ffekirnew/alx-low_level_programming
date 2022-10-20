#include "lists.h"
#include <stdio.h>

/**
 * print_node - prints a node
 * @node: the node to be printed
 *
 * Return: 1 for success, 0 for failure
 */
int print_node(const list_t *node)
{
	if (node == NULL)
		return (0);

	if (node->str == NULL)
		printf("[0] (nil)\n");
	else
		printf("[%d] %s\n", node->len, node->str);
	
	return (1);
}

/**
 * print_list - prints all the elements of a list_t list
 * @h: a pointer to the head of the linked list
 *
 * Return: int (the number of elements in the list)
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (1)
	{
		if (h == NULL)
			break;
		count += print_node(h);
		h = h->next;
	}
	return (count);
}
