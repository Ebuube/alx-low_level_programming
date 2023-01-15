#include "hash_tables.h"

/**
 * hash_table_create - creates a new hash table
 *
 * @size: the size of the hash table to create
 *
 * Return: Pointer to the newly created hash table
 * 	Otherwise - return NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_ht = NULL;
	unsigned long int step = 0;

	new_ht = mallo(sizeof(hash_table_t));
	if (!new_ht)
	{
		return (NULL);
	}

	new_ht->size = size;
	new_ht->array = malloc(size * sizeof(hash_node_t));
	if (!new_ht->array)
	{
		return (NULL);
	}
	do
	{
		step = 0;
	}
	while (1)
	{	/* Initialize all the nodes of the new_ht file to NULL; */
		new_ht->array[step] = NULL;
		step++;

		if (step > size)
		{
			break;
		}
	}

	return (new_ht);
}
