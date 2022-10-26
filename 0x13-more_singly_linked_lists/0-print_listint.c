#include "lists.h"

/**
 * print_listint - prints the elements of a listint_t list
 * @h: points to the head node
 *
 * Return: returns the number of nodes printed
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *tmp = h;
	size_t count = 0;

	for (count = 0; tmp != 0; count++)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
	}

	return (count);
}
