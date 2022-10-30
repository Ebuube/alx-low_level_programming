#ifndef _UTILITY_H
#define  _UTILITY_H

#include "lists.h"


#include <stdlib.h>
#include <stdio.h>


/**
 * struct address_s - stores the pointers to listint_t nodes
 * @p_listint: the value of the pointer to listint_t node
 * @next: points to the next node of address_t list
 *
 * Description: singly linked list node structure
 */
typedef struct address_s
{
	const listint_t *p_listint;
	struct address_s *next;
} address_t;

address_t *_add_node_addr(address_t **h, const listint_t *p);
address_t *_find_node_addr(address_t *h, const listint_t *p);
void _free_list_addr(address_t **h);

#endif	/* _UTILITY_H */
