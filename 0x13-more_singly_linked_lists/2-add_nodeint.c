#include "lists.h"

/**
 * add_nodeint - add a new node at the beginning of a listint_t list
 * @head: address of the head of the list
 * @n: data to add
 *
 * Return: the address of the new element if successful else NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *tmp = NULL;

	tmp = malloc(sizeof(listint_t));
	if (tmp == NULL)
	{
		return (NULL);
	}

	tmp->n = n;	/* assigning value */
	/* insert node */
	if ((*head) == NULL)
	{
		/* the list is empty */
		tmp->next = NULL;
		(*head) = tmp;
	}
	else
	{
		tmp->next = (*head);
		(*head) = tmp;
	}
	return (tmp);
}
