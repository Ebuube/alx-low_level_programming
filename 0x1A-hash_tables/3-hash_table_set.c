#include "hash_tables.h"

/**
 * hash_table_set - add an element to the hash table
 * @ht: hash table you want to add or update the key/value to
 * @key: key, cannot be an empty string
 * @value: value associated with key.
 * It must be duplicated and can be empty
 *
 * Description: In case of collision, add the new node at the beginning of the
 * list
 * An empty string is equivalent to "\0"
 * A null string is equivalent to NULL
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *tmp = NULL;
	size_t index = 0;

	if (ht == NULL || key == NULL || strlen(key) == 0 || value == NULL)
	{/* Invalid arguments */
		return (0);
	}

	/* Check if node exists and update it */
	index = key_index((unsigned char *)key, ht->size);

	tmp = _get_node(ht->array[index], key);
	if (tmp != NULL)
	{/* Update node */
		if (update_str(&(tmp->value), value) == NULL)
		{/* Failure in updating value */
			return (0);
		}
		return (1);
	}

	/* Create and initialize new node */
	tmp = _new_node(key, value);
	if (tmp == NULL)
	{/* New node creation error */
		return (0);
	}

	/* link node */
	if (ht->array[index] != NULL)
	{
		tmp->next = ht->array[index];
	}

	ht->array[index] = tmp;	/* reasssign head */

	return (1);
}

/**
 * _get_node - find a node with the same key in this list
 * @head: points to a hash_node_t list
 * @key: key to search for, can't be an empty string
 *
 * Return: the node if found, else NULL
 */
hash_node_t *_get_node(hash_node_t *head, const char *key)
{
	if (head == NULL || key == NULL || strlen(key) == 0)
	{/* empty list */
		return (NULL);
	}

	for (; head != NULL; head = head->next)
	{
		if (strcmp(head->key, key) == 0)
		{
			return (head);
		}
	}

	return (NULL);
}

/**
 * _new_node - create and initialize a new node
 * @key: key to assign in new node.
 * @value: value to assign to new node
 *
 * Description: the string values are duplicated
 * The key cannot be an empty string i.e The length must be greater than 0
 * But the value can be an empty string
 *
 * Return: new node on success, else NULL
 */
hash_node_t *_new_node(const char *key, const char *value)
{
	hash_node_t *new = NULL;

	if (key == NULL || strlen(key) == 0 || value == NULL)
	{
		return (NULL);
	}

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
	{
		return (NULL);
	}

	/* Assign values */
	new->next = NULL;

	/* Replace tmp with update_str(new->key, key); */
	if (update_str(&(new->key), key) == NULL)
	{
		free(new);
		return (NULL);
	}
	if (update_str(&(new->value), value) == NULL)
	{/* Duplication error */
		free(new);
		return (NULL);
	}

	return (new);
}

/**
 * update_str - update a value using string duplication
 * @dest: address of destination to update value
 * @src: source string
 *
 * Description: dest remains unchanged on failure
 * src can be empty but not NULL.
 * An empty string is equivalent to "\0".
 * Return: dest on success, else NULL
 */
char *update_str(char **dest, const char *src)
{
	char *new = NULL;

	if (src == NULL)
	{
		return (NULL);
	}

	new = strdup(src);

	if (new == NULL)
	{
		return (NULL);
	}

	if ((*dest) != NULL)
		free(*dest);

	(*dest) = new;

	return (*dest);
}
