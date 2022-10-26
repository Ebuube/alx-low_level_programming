#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: address of the head node
 *
 * Return: data(n) of the deleted node, else 0 if list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp = (*head)->next;
	int data = 0;

	printf("pop_listint:\tEntry\n");	/* test */

	if ((*head) == NULL)
	{
		return (0);
	}

	data = (*head)->n;	/* fetching data (n) */

	printf("\ndata == %d\n", data);	/* test */
	printf("*head == %p\n", (void *)(*head));	/* test */
	printf("(*head)->next == %p\n", (void *)(*head)->next);	/* test */
	printf("tmp == %p\n",(void *)tmp);	/* test */

	free((*head));
	(*head) = tmp;
	tmp = NULL;

	printf ("\nAfter deletion\n");	/* test */
	printf("\ntmp == %p\n", (void *)tmp);	/* test */
	printf("(*head) == %p\n", (void *)(*head));	/* test */
	printf("data == %d\n", data);	/* test */

	printf("pop_listint:\tExit\n");	/* test */
	return (data);
}
