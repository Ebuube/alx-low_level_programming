#include "lists.h"

#include "utility.c"

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: points to head node
 *
 * Description: The function can print lists with a loop
 * It goes through the list only once
 *
 * Return: the number of nodes in the list
 * else, exit the program with exit status 98
 */
size_t print_listint_safe(const listint_t *head)
{
	address_t *addr_head = 0;
	size_t count = 0;

	if (!head)
	{
		/* check wrong input */
		exit(98);
	}

	for (; head; head = head->next, count++)
	{
		if (_find_node_addr(addr_head, head))
		{
			/* encountered a loop in the list */
			printf("-> [0x%p] %d\n", (void *)head, head->n);
			return (count);
		}
		if (!_add_node_addr(&addr_head, head))
		{
			exit(98);
		}
		printf("[0x%p] %d\n", (void *)head, head->n);
	}

	_free_list_addr(&addr_head);

	return (count);
}
