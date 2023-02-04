#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 *
 * @ht: the hash table to update with a key/value pair
 * @key: the key of the value (key cannot be an empty string)
 * @value: the value associated with the key (it can be an empty string)
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node = NULL;
	unsigned long int index = 0;

	if (ht == NULL || key == NULL)
	{
		return (0);
	}

	/* create and initialize new node */
	new_node  = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{
		return (0);
	}
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = NULL;
	if (new_node->key == NULL)
	{
		free(new_node);
		return (0);
	}
	if (new_node->value == NULL && value != NULL)
	{
		free(new_node);
		free(new_node->key);
		return (0);
	}

	/* link up the new node  */
	index = key_index((unsigned char *)key, ht->size);
	if (ht->array[index] == NULL)
		ht->array[index] = new_node;	/* first item in the list */
	else
	{
		/* free(ht->array[index]); */
		ht->array[index] = new_node;
	}
	return (1);
}
