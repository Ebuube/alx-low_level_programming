#include "hash_tables.h"

/**
 * hash_table_create - create a hash table
 * @size: the size of the array
 *
 * Return: a pointer the newly created hash table
 * If something went wrong, return NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht = NULL;

	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
	{/* Malloc failure */
		return (NULL);
	}

	ht->array = malloc(size * sizeof(hash_node_t *));
	if (ht->array == NULL)
	{/* Malloc failure */
		return (NULL);
	}

	return (ht);
}
