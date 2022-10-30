#ifndef _UTILITY_C
#define _UTILITY_C


#include "utility.h"

/**
 * _add_node_addr - adds node to an address_t list,
 * and initialiaze its p_listint value to p
 * @h: address of pointer to head node
 * @p: points a node in a listint_t list
 *
 * Return: pointer to the just added node if successful,
 * else 0 if function fails
 */
address_t *_add_node_addr(address_t **h, const listint_t *p)
{
	address_t *tmp = 0;

	if (!h)
	{
		/* check wrong input */
		return (0);
	}

	tmp = malloc(sizeof(address_t));
	if (!tmp)
	{
		return (0);
	}
	tmp->p_listint = p;

	if (!(*h))
	{
		/* empty list */
		tmp->next = NULL;
		(*h) = tmp;
	}
	else
	{
		tmp->next = (*h);
		(*h) = tmp;
	}

	return (tmp);
}



/**
 * _find_node_addr - searches through an address_t list for the node that
 * has its p_listint value to be the same as p
 * @h: points to head of address_t list
 * @p: points to a node of listinit_t list
 *
 * Return: pointer to the address_t node that qualifies else NULL
 */
address_t *_find_node_addr(address_t *h, const listint_t *p)
{
	if (!h)
	{
		return (0);
	}
	for (; h; h = h->next)
	{
		if (h->p_listint == p)
		{
			return (h);
		}
	}

	return (NULL);
}


/**
 * _free_list_addr - fress an address_t list
 * @h: address of head pointer to address_t list
 *
 * Description: sets head to NULL
 * Return: nothing
 */
void _free_list_addr(address_t **h)
{
	address_t *tmp = 0;

	if (!h)
	{
		return;
	}

	for (; (*h);)
	{
		tmp = (*h);
		(*h) = (*h)->next;
		free(tmp);
	}
	(*h) = NULL;	/* set head to NULL */
}


#endif	/* _UTILITY_C */
