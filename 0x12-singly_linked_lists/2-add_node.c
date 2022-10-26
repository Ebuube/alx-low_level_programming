#include "lists.h"

/**
 * add_node - adds a node to the beginning of a list_t list
 * @head: address of head pointer
 * @str: the string to use for initializing the node
 *
 * Return: the address of the new element, or NULL if the function fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *tmp = 0;
	int i = 0;

	/* create and initialize node */
	tmp = malloc(sizeof(list_t));
	if (tmp == 0)
	{
		return (0);
	}

	for (tmp->len = 0; tmp->str[i]; i++)
		tmp->len++;

	tmp->str = (str == 0 || str[0] == '\0') ? strdup("") : strdup(str);
	if (!tmp->str)
	{
		free(tmp);
		tmp = NULL;
		return (0);
	}
	
	/* insert node */
	tmp->next = (*head);
	(*head) = tmp;
	return (tmp);
}
