#include "lists.h"


/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 * @head: address of head pointer of the list
 * @n: value to put in node
 *
 * Return: the address of the new element or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *tmp = 0;

	if (!head)
	{
		return (NULL);
	}
	tmp = malloc(sizeof(dlistint_t));
	if (!tmp)
	{
		return (NULL);
	}
	tmp->n = n;

	/* linking node to head */
	if ((*head) == NULL)
	{
		tmp->next = NULL;
		tmp->prev = NULL;
		(*head) = tmp;
	}
	else
	{
		(*head)->prev = tmp;
		tmp->next = (*head);
		tmp->prev = NULL;
		(*head) = tmp;
	}

	return (tmp);
}
