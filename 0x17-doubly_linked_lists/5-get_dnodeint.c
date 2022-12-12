#include "lists.h"


/**
 * get_dnodeint_at_index - gets the address of the nth node of a dlistint_t
 * linked list
 * @head: points to head of the list
 * @index: the index of the node to find
 *
 * Description: index starts from 0
 * Return: address of the index'th node, else return NULL if it does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp = 0;
	unsigned int count = 0;

	if (!head)
	{
		return (NULL);
	}
	for (tmp = head, count = 0; tmp && count < index; count++)
		tmp = tmp->next;

	return (tmp);
}
