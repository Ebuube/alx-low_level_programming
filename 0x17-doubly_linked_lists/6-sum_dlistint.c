#include "lists.h"


/**
 * sum_dlistint - calculates the sum of all the data (n) of a dlistint_t
 * linked list
 * @head: points to the head of a node
 *
 * Return: the sum of al the data(n) or 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (!head)
	{
		return (0);
	}
	for (sum = 0; head; head = head->next)
		sum += head->n;

	return (sum);
}
