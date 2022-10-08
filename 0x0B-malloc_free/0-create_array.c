#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of characters and initializes it with
 * a specific char
 * @size: the size of array
 * @c: character for initializing the array
 *
 * Return: pointer to memory, if size is 0 or memory allocation fails,
 * NULL is returned
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *tmp = 0;

	if (size == 0)
	{
		return (0);
	}

	tmp = malloc(sizeof(char) * size);
	if (tmp == 0)
	{
		return (0);
	}
	for (i = 0; i < size; i++)
		tmp[i] = c;

	return (tmp);
}
