#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: the head pointer of the list
 *
 * Return: the number elements in the list
 */
size_t list_len(const list_t *h)
{
	const list_t *tmp = h;
	int count = 0;

	if (h == 0)
	{
		return (0);
	}
	for (count = 0; tmp != 0; count++)
		tmp = tmp->next;

	return (count);
}
