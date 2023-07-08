#include "hash_tables.h"

/**
 * hash_table_delete - delete a hash table
 * @ht: hash table to delete
 *
 * Return: nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *tmp = NULL;
	size_t i = 0;

	if (ht == NULL)
	{
		return;
	}

	for (i = 0; i < ht->size; i++)
	{
		for (tmp = ht->array[i]; tmp != NULL;)
		{
			tmp = ht->array[i];
			ht->array[i] = ht->array[i]->next;

			/* Deleting node */
			if (tmp->key != NULL)
				free(tmp->key);
			if (tmp->value != NULL)
				free(tmp->value);

			free(tmp);

			/* Get to next node */
			tmp = ht->array[i];
		}
	}

	/* Delete table */
	free(ht->array);
	free(ht);
}
