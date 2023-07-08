#include "lists.h"


/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: address of pointer to head
 * @idx: the index to insert the node
 * @n: the value of the node
 *
 * Description: if it is not possible to add the new node at index idx,
 * do not add the new node and return NULL
 *
 * Return: address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp = NULL, *new = NULL;
	unsigned int i = 0;

	if (h == NULL)
	{/* Invalid address of head pointer to list */
		return (NULL);
	}

	tmp = (*h);
	for (; idx != 0 && tmp != NULL && i < idx; i++)
		tmp = tmp->next;

	if (tmp == NULL && i != idx)
	{/* Could not find index */
		return (NULL);
	}

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{/* Malloc failure */
		return (NULL);
	}
	new->next = tmp;
	new->prev = (tmp == NULL) ? NULL : tmp->prev;
	new->n = n;

	if (tmp != NULL && tmp->prev != NULL)
		tmp->prev->next = new;
	if (tmp != NULL)
		tmp->prev = new;
	if (idx == 0)
		(*h) = new;

	return (new);
}
