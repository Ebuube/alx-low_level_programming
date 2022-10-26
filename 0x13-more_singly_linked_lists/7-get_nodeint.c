#include "lists.h"

/**
 * get_nodeint_at_index - fetches the nth node of a listint_t linked list
 * @head: points to head node
 * @index: index of node to fetch
 *
 * Return: the nth node, else NULL if node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp = 0;

	if (!head)
	{
		return (NULL);
	}
	tmp = head;
	for (; index > 0 && tmp != NULL; index--)
		tmp = tmp->next;
	if (!tmp)
	{
		return (NULL);
	}

	return (tmp);
}
