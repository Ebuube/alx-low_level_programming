#include "lists.h"

/**
 * listint_len - calculates the number of elements in a linked listint_t list
 * @h: points to head of list
 *
 * Return: the number of elements in the list
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *tmp = h;
	size_t count = 0;

	for (count = 0; tmp != 0; count++)
		tmp = tmp->next;

	return (count);
}
