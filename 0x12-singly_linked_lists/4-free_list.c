#include "lists.h"

/**
 * free_list - frees all the node in a list_t list
 * @head: pointer to head
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *tmp = head;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
		prev = 0;
	}
}
