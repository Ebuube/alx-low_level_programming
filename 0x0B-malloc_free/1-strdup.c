#include "main.h"
#include <stdlib.h>

/**
 * _strdup - copies a newly allocated space in memory, which contains a copy
 * of the string given as a parameter
 * @str: the string to copy
 * Return: on success, returns pointer to the newly allocated string,
 * if str is 0, returns 0,
 * if memory allocation fails, returns 0
 */
char *_strdup(char *str)
{
	unsigned int len = 0, i = 0;
	char *tmp = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[len])
		len++;	/* get string length */
	tmp = malloc(sizeof(char) * (len + 1));

	if (tmp == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len + 1; i++)
		tmp[i] = str[i];
	tmp[i] = '\0';

	return (tmp);
}
