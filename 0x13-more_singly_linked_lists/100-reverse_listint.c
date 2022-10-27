#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: address of head pointer
 *
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *next = NULL;

	if (!head || !(*head))
	{
		return (NULL);
	}
	if (!(*head)->next)
	{
		/* only one element in list */
		return ((*head));
	}

	for (; (*head)->next;)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = (*head);
		(*head) = next;

	}
	next->next = prev;
	prev = next;
	
	return (prev);
}
