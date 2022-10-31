#include "lists.h"
#include "utility.h"

/* #include "utility.c" */

/**
 * free_listint_safe - frees a lisint_t list even if it has a loop
 * @h: address of pointer to head
 *
 * Description: the function goes through the list once
 * And sets the head to NULL
 * Return: size of the list that was free'd
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *tmp = 0;
	address_t *addr_head = 0;
	size_t count = 0;

	if (!h)
	{
		return (0);
	}

	for (tmp = (*h); (*h);)
	{

		if (_find_node_addr(addr_head, (*h)))
		{
			/* encountered a loop in the list */
			(*h) = NULL;	/* setting head to NULL */
			return (count * sizeof(listint_t));
		}
		if (!_add_node_addr(&addr_head, (*h)))
		{
			exit(1);
		}
		tmp = (*h);
		(*h) = (*h)->next;
		free(tmp);
	}

	_free_list_addr(&addr_head);
	(*h) = NULL;	/* setting head to NULL */

	return (count * sizeof(listint_t));
}
