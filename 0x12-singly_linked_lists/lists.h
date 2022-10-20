#ifndef _LINKED_LISTS_HEADER_
#define _LINKED_LISTS_HEADER_

#include <stddef.h>
/**
 * struct node - an object representing a linked list
 * node
 * @str: the string data to be held as value
 * @len: the length of the string
 * @next: a pointer to the next node
 */
typedef struct node
{
	char *str;
	int len;
	struct node *next;
} list_t;

/* Task 0 */
size_t print_list(const list_t *h);

#endif
