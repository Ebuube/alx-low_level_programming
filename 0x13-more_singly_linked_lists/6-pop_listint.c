#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: address of the head node
 *
 * Return: data(n) of the deleted node, else 0 if list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp = 0;
	int data = 0;

	if ((*head) == NULL)
	{
		return (0);
	}

	tmp = (*head)->next;
	data = (*head)->n;	/* fetching data (n) */

	free((*head));
	(*head) = tmp;
	tmp = NULL;

	return (data);
}
