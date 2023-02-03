#include "hash_tables.h"


/**
 * hash_table_create - creates a new hash table
 *
 * @size: the size of the array
 * Return: a pointer to the newly created hash table
 * Or Null if something went wrong
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *tmp = 0;

	tmp = malloc(size * sizeof(hash_node_t));

	return (tmp);
}
