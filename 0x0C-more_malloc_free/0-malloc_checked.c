#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: sizeof of bytes to allocate
 *
 * Description: If malloc fails, the malloc_checked function
 * should cause normal process termination with a status
 * value of 98
 * Return: pointer to the allocated space
 */
void *malloc_checked(unsigned int b)
{
	void *space = 0;

	space = malloc(b);
	if (space == 0)
	{
		exit(98);
	}
	return (space);
}
