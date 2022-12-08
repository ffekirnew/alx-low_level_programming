#include "lists.h"

/**
 * sum_dlistint - returns the sum of the data contained
 * in the nodes of a doubly-linked list
 * @head: the head of the linked list
 *
 * Return: an int sum
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}