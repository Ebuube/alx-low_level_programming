#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash_table
 *
 * @ht: the hash table
 * Return: nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *tmp = NULL;
	unsigned long int step = 0;

	if (ht == NULL)
	{
		return;
	}

	for (step = 0; step < ht->size; step++)
	{
		for (tmp = ht->array[step]; tmp != NULL;)
		{	/* free nodes in this bucket */
			tmp = ht->array[step]->next;
			free(ht->array[step]->key);
			free(ht->array[step]->value);
			free(ht->array[step]);
			ht->array[step] = tmp;
		}
		free(ht->array[step]);
		free(tmp);
		ht->array[step] = NULL;
	}
	free(ht->array);
	free(ht);
	ht = NULL;
}
