#include "hash_tables.h"


hash_node_t *update_node(hash_table_t *ht, hash_node_t *node);
hash_node_t *insert_node(hash_table_t *ht, hash_node_t *node);


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
	char *key_copy = NULL, *value_copy = NULL;

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
	key_copy = strdup(key);
	value_copy = strdup(value);
	if (key_copy == NULL)
	{
		free(new_node);
		return (0);
	}
	if (value_copy == NULL && value != NULL)
	{
		free(new_node);
		free(key_copy);
		return (0);
	}

	new_node->key = key_copy;
	new_node->value = value_copy;

	if (update_node(ht, new_node) != NULL)
	{	/* key already exists and has been updated */
		return (1);
	}
	else if (insert_node(ht, new_node) == NULL)
	{
		return (0);
	}

	return (1);
}


/**
 * update_node - updates an already existing node
 *
 * @ht: hash table to look for node
 * @node: node to update
 * Return: the address of the updated node if successful
 * else return NULL
 */
hash_node_t *update_node(hash_table_t *ht, hash_node_t *node)
{
	hash_node_t *tmp = NULL;
	unsigned long int index = 0;

	if (ht == NULL || node == NULL)
	{
		fprintf(stderr, "\nERROR: TRYING TO REFRENCE NULL\n");
		fprintf(stderr, "\thash table: 0x%p\tnode: 0x%p\n",
				(void *)ht, (void *)node);
		return (NULL);
	}
	index = key_index((unsigned char *)node->key, ht->size);

	for (tmp = ht->array[index]; tmp != NULL; tmp = tmp->next)
	{
		if (strcmp(tmp->key, node->key) == 0)
		{
			tmp->value = node->value;
			return (tmp);
		}
	}

	return (NULL);
}


/**
 * insert_node - inserts a node into a hash table
 *
 * @ht: hash table to insert the node
 * @node: node to insert
 * Return: the address of the updated node if successful
 * else return NULL
 */
hash_node_t *insert_node(hash_table_t *ht, hash_node_t *node)
{
	unsigned long int index = 0;

	if (ht == NULL || node == NULL)
	{
		fprintf(stderr, "\nERROR: TRYING TO REFRENCE NULL\n");
		fprintf(stderr, "\thash table: 0x%p\tnode: 0x%p\n",
				(void *)ht, (void *)node);
		return (NULL);
	}
	index = key_index((unsigned char *)node->key, ht->size);

	if (ht->array[index] == NULL)
	{
		ht->array[index] = node;
	}
	else
	{
		node->next = ht->array[index];
		ht->array[index] = node;
	}

	return (node);
}
