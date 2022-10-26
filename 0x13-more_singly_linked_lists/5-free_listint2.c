#include "lists.h"

/**
 * free_listint2 - frees a listint_t list and sets the head to NULL
 * @head: address of the first node
 *
 * Description: sets head to NULL at the end
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp = 0;

	if (head == NULL || (*head) == NULL)
	{
		return;
	}
	while ((*head))
	{
		tmp = (*head)->next;
		free((*head));
		(*head) = tmp;
	}
	(*head) = NULL;
}
