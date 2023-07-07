#include "hash_tables.h"

/**
 * hash_table_get - retrieve value associated with a key
 * @ht: hash table to search
 * @key: key to search for
 *
 * Return: value associated with key, or NULL if key could not be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *tmp = NULL;
	size_t index = 0;

	if (ht == NULL)
	{/* NULL passed as table */
		return (NULL);
	}

	index = key_index((unsigned char *)key, ht->size);
	for (tmp = ht->array[index]; tmp != NULL; tmp = tmp->next)
	{
		if (strcmp(tmp->key, key) == 0)
		{/* Match found */
			return (tmp->value);
		}
	}

	return (NULL);
}
