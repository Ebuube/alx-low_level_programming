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
	listint_t *tmp = (*head), *prev = 0;

	for (prev = tmp; tmp != NULL;)
	{
		tmp = tmp->next;
		free(prev);
	}
	free(tmp);
	(*head) = NULL;
}
