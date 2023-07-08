#include "lists.h"

/**
 * dlistint_len - counts the number of nodes in a dlistint_t list
 * @h: points to head of a dlistint_t list
 *
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}

	return (count);
}
