#include "lists.h"

/**
 * sum_listint - adds the data contained in the listint_t
 * @head: the head of the linked list
 *
 * Return: the sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
