#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 *
 * @ht: the hash table to look into
 * @key: the key to be search for
 * Return: the value associated with the element
 * or NULL if key couldn't be found
 * ASSUMPTION
 * The hash table's bucket is NULL if nothing is in it's list.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *tmp = NULL;
	char *value = NULL;
	unsigned long int index = 0;

	if (ht == NULL || key == NULL)
	{
		return (NULL);
	}

	index = key_index((unsigned char *)key, ht->size);
	for (tmp = ht->array[index]; tmp != NULL; tmp = tmp->next)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			value = tmp->value;
			break;
		}
	}

	return (value);
}
