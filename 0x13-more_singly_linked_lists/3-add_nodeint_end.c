#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: address of the pointer to the head node
 * @n: data to add to the list
 *
 * Return: the add the address of the new element, else NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *tmp = NULL, *step = NULL;

	tmp = malloc(sizeof(listint_t));
	if (tmp == NULL)
	{
		return (0);
	}

	tmp->n = n;	/* assigning value */

	if ((*head) == NULL)
	{
		tmp->next = NULL;
		(*head) = tmp;
	}
	else
	{
		for (step = (*head); step->next != NULL; step = step->next)
			;
		step->next = tmp;
		tmp->next = NULL;
	}

	return (tmp);
}
