#ifndef _MORE_SINGLY_LIKED_LISTS_HEADER_
#define _MORE_SINGLY_LIKED_LISTS_HEADER_

#include <stddef.h>

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 *
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

/* Task 0 */
size_t print_listint(const listint_t *h);

/* Task 1 */
size_t listint_len(const listint_t *h);

#endif
