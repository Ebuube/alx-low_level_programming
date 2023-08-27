#include "main.h"

/**
 * _calloc - allocates memory for an array
 * @nmemb: the number of elements to be in the array
 * @size: the size in byte of each element
 * Description: The memory is set to zero. If nmemb == 0, this returns NULL
 * Return: Returns pointer memory or NULL, if malloc fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *space = NULL;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	space = malloc(nmemb * size);
	if (space == NULL)
	{
		return (NULL);
	}

	/* Initialize memory block to zero */
	for (i = 0; i < nmemb; i++)
	{
		space[i] = 0;
	}

	return (space);
}
