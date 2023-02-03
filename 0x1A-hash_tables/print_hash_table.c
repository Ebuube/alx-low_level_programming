#include "hash_tables.h"

/**
 * print_hash_table - prints all the elements in a hash table
 * @ht: the hash table to print
 * Return: the total number of elements printed
 * else -1 if table can't be printed
 */
long int print_hash_table(const hash_table_t *ht)
{
	hash_node_t *tmp = NULL;
	unsigned long int step = 0, count;

	if (ht == NULL)
	{
		return (-1);
	}

	printf("\nPrinting hash table 0x%p\n", (void *)ht);
	for (step = 0; step < ht->size; step++)
	{
		printf("Bucket %lu:\n", step);
		for (tmp = ht->array[step]; tmp != NULL; count++)
		{
			printf("\tkey: \"%s\"\tvalue: \"%s\"\n", tmp->key,
					tmp->value);
			tmp = tmp->next;
		}
	}
	printf("\nEnd of hash table\n");

	return (count);
}
