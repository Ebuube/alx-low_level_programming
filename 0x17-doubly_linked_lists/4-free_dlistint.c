#include "lists.h"

/**
 * free_dlistint - fres a dlistint_t list
 * @head: points to head of a dlistint_t list
 *
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = 0;

	if (!head)
	{
		return;
	}

	tmp = head;
	while (tmp)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
