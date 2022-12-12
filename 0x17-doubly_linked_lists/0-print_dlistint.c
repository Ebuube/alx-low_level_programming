#include "lists.h"


/**
 * print_dlistint - prints the contents of a dlistint_t list from head to end
 * @h: points to a dlistint_t first node
 *
 * Return: number of nodes printed
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	for (count = 0; h; h = h->next, count++)
		printf("%d\n", h->n);

	return (count);
}
