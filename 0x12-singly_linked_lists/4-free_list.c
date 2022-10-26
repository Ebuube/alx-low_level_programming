#include "lists.h"

/**
 * free_list - frees all the node in a list_t list
 * @head: pointer to head
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *tmp = head, *prev = tmp;

	while (tmp != NULL)
	{
		prev = tmp;
		tmp = tmp->next;
		free(prev->str);
		free(prev);
	}
}
