#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 *
 * @ht: the hash table
 * Return: nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *tmp = NULL;
	unsigned long int step = 0;
	bool first_to_print = true;

	if (ht == NULL)
	{
		return;
	}

	printf("{");
	for (step = 0; step < ht->size; step++)
	{
		for (tmp = ht->array[step]; tmp != NULL; tmp = tmp->next)
		{
			if (first_to_print == false)
				printf(", ");
			printf("\'%s\': \'%s\'", tmp->key, tmp->value);
			first_to_print = false;
		}
	}
	printf("}\n");
}
