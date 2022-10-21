#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: the head pointer
 *
 * Description: If str is NULL, prints [0] (nil)
 * Return: the number of nodes printed
 */
size_t print_list(const list_t *h)
{
	const list_t *tmp = h;
	size_t count = 0;

	if (h == 0)
	{
		return (0);
	}
	for (count = 0; tmp != NULL; count++, tmp = tmp->next)
	{
		if (tmp->str == 0)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", tmp->len, tmp->str);
	}
	return (count);
}
