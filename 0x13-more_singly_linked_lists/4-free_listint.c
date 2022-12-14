#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: points to first node in the list
 *
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *tmp = 0;

	while (head != NULL)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
