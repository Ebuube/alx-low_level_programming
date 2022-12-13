#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: the pointer to the memory area to fill
 * @b: the value to fill the memory with
 * @n: the size of the memory area, s, in bytes
 * Return: pointer to the memory area, s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int step = 0;

	for (step = 0; (unsigned int) step < n; step += sizeof(char))
		s[step] = b;
	return (s);
}
