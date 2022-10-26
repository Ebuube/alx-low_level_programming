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
	if (str == 0 || str[0] == '\0')
	{
		tmp->str = strdup("");
		if (!tmp->str)
		{
			free(tmp);
			tmp = 0;
			return (0);
		}
		tmp->len = 0;
	}
	else
	{
		tmp->str = strdup(str);
		if (tmp->str == 0)
		{
			/* free everything if strdup fails */
			free(tmp);
			tmp = 0;
			return (0);
		}
		for (tmp->len = 0; tmp->str[i] != '\0'; i++)
			tmp->len++;
	}
	/* insert node */
	tmp->next = (*head);
	(*head) = tmp;
	return (tmp);
}
