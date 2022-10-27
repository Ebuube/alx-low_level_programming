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
	listint_t *tmp = 0, *new = 0;

	new = malloc(sizeof(listint_t));
	if (!new || !head)
	{
		return (NULL);
	}
	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		(*head) = new;
		return (new);
	}
	else
	{
		for (tmp = (*head); tmp && idx - 1 > 0; idx--)
			tmp = tmp->next;
		new->next = tmp->next;
		tmp->next = new;
	}
	return (new);

}
