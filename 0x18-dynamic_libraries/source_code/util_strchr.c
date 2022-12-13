#include "main.h"
#include <stdlib.h>

/**
 * _strchr - locates a character in a string
 * @s: the string to search
 * @c: the character to locate
 * Return: pointer to the first occurence of c in s
 * if not found, NULL is returned
 */
char *_strchr(char *s, char c)
{
	if (s == NULL)
	{
		return (NULL);
	}
	while (1)
	{
		if ((*(s++) == c))
		{
			return (s - 1);
		}
		if ((s - 1) == 0)
		{
			return (NULL);
		}
	}
	return (NULL);
}
