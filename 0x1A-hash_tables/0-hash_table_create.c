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

	/* Create table */
	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
	{/* Malloc failure */
		return (NULL);
	}

	/* Create bucket for table */
	ht->array = malloc(size * sizeof(hash_node_t *));
	if (ht->array == NULL)
	{/* Malloc failure */
		free(ht);	/* Free table */
		return (NULL);
	}

	ht->size = size;	/* Assign size on successful allocation */

	return (ht);
}
