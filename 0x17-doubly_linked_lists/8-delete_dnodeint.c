#include "lists.h"


/**
 * delete_dnodeint_at_index - deletes the node at index 'index' of a dlistint_t
 * linked list.
 * @head: address of pointer to the head of the list
 * @index: index of the node to delete
 *
 * Description: index starts from 0
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *step = 0;
	unsigned int count = 0;

	if (!head || !(*head))
	{
		return (-1);
	}

	for (count = 0, step = (*head); step && count < index; count++)
		step = step->next;

	if ((*head)->next == NULL && count == 0)
	{
		/* list with a single node */
		free(*head);
		(*head) = NULL;
	}
	else if ((*head)->next != NULL && count == 0)
	{
		/* first node of a list */
		(*head) = (*head)->next;
		(*head)->prev = NULL;
		free(step);
	}
	else
	{
		step->prev->next = step->next;
		free(step);
	}

	return (1);
}
