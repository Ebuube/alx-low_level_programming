#include "lists.h"

/**
 * free_list - frees all the node in a list_t list
 * @head: pointer to head
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *tmp = head, *prev = 0;

	for (tmp = head; tmp != NULL;)
	{
		prev = tmp;
		tmp = tmp->next;
		free(prev);
	}
}
