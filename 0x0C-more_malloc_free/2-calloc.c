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

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	space = malloc(nmemb * size);
	if (space == NULL)
	{
		return (NULL);
	}

	space = _memset(space, 0, nmemb);

	return (space);
}

/**
 * _memset - set the memory with a constant byte
 * @mem: allocated space to fill
 * @const_byte: constant byte
 * @nmemb: number of elements in the space to be filled
 *
 * Return: a poiter to the allocated space
 */
char *_memset(char *mem, const char const_byte, const unsigned int nmemb)
{
	unsigned int i = 0;

	if (mem == NULL)
	{
		return (NULL);
	}

	/* Initialize memory block to zero */
	for (i = 0; i < nmemb; i++)
	{
		mem[i] = const_byte;
	}

	return (mem);
}
