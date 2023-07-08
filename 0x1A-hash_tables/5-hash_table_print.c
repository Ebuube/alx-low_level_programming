#include "hash_tables.h"

/**
 * hash_table_print - print a hash table
 * @ht: hash table to print
 *
 * Description: The key/value pairs are printed in the order they
 * appear in the array of hash table
 * i.e. Order: array, list
 *
 * Return: nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *tmp = NULL;
	size_t i = 0;
	bool printed_first_element = false;

	if (ht == NULL)
	{/* NULL passed as hash table */
		return;
	}

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		for (tmp = ht->array[i]; tmp != NULL; tmp = tmp->next)
		{
			if (printed_first_element == true)
				printf(", ");
			else
				printed_first_element = true;

			printf("'%s': '%s'", tmp->key, tmp->value);
		}
	}

	printf("}\n");
}
