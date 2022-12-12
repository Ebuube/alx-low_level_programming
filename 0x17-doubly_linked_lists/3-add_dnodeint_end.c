#include "lists.h"


/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: address of pointer to head
 * @n: value to put into node
 *
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tmp = 0;
	dlistint_t *end = 0;

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
	/* link to empty list */
	if ((*head) == NULL)
	{
		tmp->next = NULL;
		tmp->prev = NULL;
		(*head) = tmp;
	}
	else
	{
		/* link to non-empty list */
		for (end = (*head); end->next;)
			end = end->next;
		tmp->prev = end;
		tmp->next = NULL;
		end->next = tmp;
	}
	return (tmp);
}
