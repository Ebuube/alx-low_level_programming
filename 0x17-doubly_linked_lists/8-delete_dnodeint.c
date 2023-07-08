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
	dlistint_t *tmp = NULL;
	size_t i = 0;

	if (head == NULL || (*head) == NULL)
	{
		return (-1);
	}

	for (tmp = (*head); tmp->next != NULL && i < index; i++)
		tmp = tmp->next;

	if (index == 0)
		(*head) = tmp->next;
	if (tmp->prev != NULL)
		tmp->prev->next = tmp->next;
	if (tmp->next != NULL)
		tmp->next->prev = tmp->prev;

	free(tmp);
	return (1);
}
