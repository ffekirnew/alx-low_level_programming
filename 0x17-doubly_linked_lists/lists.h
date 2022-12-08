#ifndef _DOUBLY_LINKED_LIST_HEADER_
#define _DOUBLY_LINKED_LIST_HEADER_

#include <stddef.h>
/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 *
 */
typedef struct dlistint_s
{
	int n;
	struct dlistint_s *prev;
	struct dlistint_s *next;
} dlistint_t;

/* task 0*/
size_t print_dlistint(const dlistint_t *h);

/* task 1 */
size_t dlistint_len(const dlistint_t *h);

#endif
