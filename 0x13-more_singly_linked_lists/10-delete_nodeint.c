#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index of a listint_t
 * linked list
 * @head: address of head pointer
 * @index: the position of the node to delete
 *
 * Description: index starts at 0
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp = 0, *prev = 0;

	if (!head || !(*head))
	{
		return (-1);
	}
	tmp = (*head);
	prev = tmp;
	if (index == 0)
	{
		(*head) = (*head)->next;
		free(tmp);
		tmp = 0;
		return (1);
	}
	for (; tmp && index - 1 > 0; index--)
		tmp = tmp->next;
	prev = tmp;
	tmp = tmp->next;
	prev->next = tmp->next;
	free(tmp);
	tmp = 0;

	return (1);
}
