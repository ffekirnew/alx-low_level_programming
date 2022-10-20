#ifndef _LINKED_LISTS_HEADER_
#define _LINKED_LISTS_HEADER_

#include <stddef.h>
#include <stdlib.h>

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

/* Task 1 */
size_t list_len(const list_t *h);

/* Task 2 */
list_t *add_node(list_t **head, const char *str);

/* Task 3 */
list_t *add_node_end(list_t **head, const char *str);

/* Task 4 */
void free_list(list_t *head);

#endif
