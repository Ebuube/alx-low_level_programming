#include "lists.h"


/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: address of pointer to head
 * @idx: the index to insert the node
 * @n: the value of the node
 *
 * Description: if it is not possible too add the new node at index idx,
 * do not add the new node and return NULL
 *
 * Return: address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp = 0;
	dlistint_t *step = 0;
	unsigned int count = 0;

	tmp = malloc(sizeof(dlistint_t));
	if (!tmp || !h)
	{
		return (NULL);
	}
	tmp->n = n;

	for (count = 0, step = (*h); step && count < idx; count++)
		step = step->next;

	if (!step && count < idx)
	{
		/* Non-existent node */
		free(tmp);
		return (NULL);
	}
	if (count == 0)
	{
		tmp->next = (*h);
		tmp->prev = NULL;
		(*h)->prev = tmp;
		(*h) = tmp;
	}
	else
	{
		tmp->next = step;
		tmp->prev = step->prev;
		step->prev->next = tmp;
		step->prev = tmp;
	}

	return (tmp);
}
