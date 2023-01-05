#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: the size for the new hash table
 *
 * Return: a new hash table with a size
*/
hash_table_t *hash_table_create(unsigned long int size)
{
    hash_table_t *new_hash_table;

    new_hash_table = malloc(sizeof(unsigned long int) + sizeof(hash_node_t) * size);
    if (!new_hash_table)
        return NULL;

    return (new_hash_table);
}
