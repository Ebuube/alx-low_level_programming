#include "lists.h"

/**
 * print_backwards - print the contents of a dlistint_t list
 * from end to head
 *
 * Return: number of nodes printed
 */
size_t print_backward(const dlistint_t *h)
{
	size_t i = 0;

	for (; h != NULL && h->next != NULL; h = h->next)
		;	/* Goto end of list */

	for (; h != NULL; h = h->prev, i++)
		printf("%d\n", h->n);

	return (i);
}
