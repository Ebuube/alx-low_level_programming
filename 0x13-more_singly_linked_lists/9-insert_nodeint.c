#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: address of head pointer
 * @idx: the index at which to insert a new node
 * @n: the data (n) value of the node
 *
 * Description: index starts at 0
 * If it is not possible to add the new node at index idx, do not add the
 * new node and return NULL
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp = 0, *prev = 0;

	prev = (*head);
	for (; prev && idx > 0; idx--)
		prev = prev->next;
	if (!prev && idx > 0)
	{
		return (0);
	}
	tmp = malloc(sizeof(listint_t));
	if (!tmp)
	{
		return (0);
	}
	tmp->n = n;	/* assigning value */

	/* inserting node */
	tmp->next = prev;
	prev = tmp;

	return (tmp);
}
