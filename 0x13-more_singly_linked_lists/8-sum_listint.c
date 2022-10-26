#include "lists.h"

/**
 * sum_listint - calculates the sum of all the data (n) of a listint_t linked
 * list
 * @head: points to head node
 *
 * Return: the sum of all the data (n), else 0 if list is empty
 */
int sum_listint(listint_t *head)
{
	listint_t *tmp = 0;
	int sum = 0;

	if (!head)
	{
		return (0);
	}
	tmp = head;

	for (tmp = head; tmp != NULL; tmp = tmp->next)
		sum += tmp->n;

	return (sum);
}
