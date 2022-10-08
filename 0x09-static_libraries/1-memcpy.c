#include "main.h"

/**
 * _memcpy - copies the values in src to dest
 * @dest: destination memory
 * @src: source memory
 * @n: size of memory to copy and paste
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int step = 0;

	for (; (unsigned int) step < n; step += sizeof(char))
		dest[step] = src[step];
	return (dest);
}
