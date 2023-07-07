#include <stdio.h>
#include "hash_tables.h"

/**
 * print_list - print a hash_node_t list
 * @head: head of a List
 *
 * Return: The number of nodes printed
 */
size_t print_list(hash_node_t *head)
{
	size_t i = 0;

	for (; head != NULL; head = head->next)
	{
		printf("key: %s\t|\tvalue: %s\n", head->key, head->value);
		i++;
	}

	return (i);
}
