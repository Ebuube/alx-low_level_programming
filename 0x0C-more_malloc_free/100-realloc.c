#include "main.h"


/**
 * _realloc - reallocate a memory block using malloc and free
 * @ptr: a pointer to previously allocated memory (can be NULL)
 * @old_size: size in bytes of the allocated space for ptr
 * @new_size: size in bytes of the new memory block
 *
 * Description:
 * - The contents will be copied to the newly allocated space,
 * in the range from the start of ptr up to the minimum of the old
 * and new sizes
 * - If new_size > old_size, the “added” memory should not be initialized
 * - If new_size == old_size do not do anything and return ptr
 * - If ptr is NULL, then the call is equivalent to malloc(new_size),
 * for all values of old_size and new_size
 * - If new_size is equal to zero, and ptr is not NULL,
 * then the call is equivalent to free(ptr). Return NULL
 *
 * Return: pointer to new memory block else NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *mem = 0;
	unsigned int min_size = 0;

	if (ptr == NULL)
	{
		mem = malloc(new_size);
		return (mem);
	}

	if (new_size == old_size)
	{
		return (ptr);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size > old_size)
	{
		mem = malloc(new_size);
		if (mem == NULL)
		{
			return (NULL);
		}
		min_size = (new_size < old_size) ? new_size : old_size;
		mem = _memcpy(ptr, mem, min_size);

		/* Free old pointer - since it has been reallocated */
		free(ptr);

	}

	return (mem);
}


/**
 * _memcpy - copy some elements form dest to src
 * @src: source of values
 * @dest: destination of values
 * @size: size in bytes of the values to copy from source
 *
 * Return: 'dest' if successful else NULL
 */
char *_memcpy(void *src, void *dest, const unsigned int size)
{
	unsigned int i = 0;

	if (src == NULL || dest == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		*((char *)dest + i) = *((char *)src + i);
	}

	return (dest);
}
