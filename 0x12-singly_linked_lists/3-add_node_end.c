#include "lists.h"

/**
 * add_node_end - add a new node at the end of a list_t list
 * @head: address of the head pointer
 * @str: string to fill in the node
 *
 * Return: the address of the new element or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *tmp = 0, *mov = 0;
	int i = 0;

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
			free(tmp), tmp = NULL;
			return (NULL);
		}
		tmp->len = 0;
	}
	else
	{
		tmp->str = strdup(str);
		if (tmp->str == 0)
		{
			free(tmp), tmp = 0;
			return (0);
		}
		for (tmp->len = 0; tmp->str[i] != '\0'; i++)
			tmp->len++;
	}
	if ((*head) != 0)
	{
		for (mov = (*head); mov->next != 0; mov = mov->next)
			;
		mov->next = tmp, tmp->next = 0;
	}
	else
		tmp->next = 0, (*head) = tmp;
	return (tmp);
}
