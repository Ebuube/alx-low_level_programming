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
	hash_table_t *hash_tmp = 0;

	hash_tmp = malloc(sizeof(hash_table_t));
	if (hash_tmp == NULL)
	{
		return (NULL);
	}

	hash_tmp->size = size;
	hash_tmp->array = malloc(size * sizeof(hash_node_t *));
	if (hash_tmp->array == NULL)
	{
		free(hash_tmp);
		return (NULL);
	}

	while (size > 0)
	{
		hash_tmp->array[size - 1] = NULL;
		size--;
	}

	return (hash_tmp);
}
