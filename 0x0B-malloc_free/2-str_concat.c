#include "main.h"
#include <stdlib.h>
#include "strlen.c"

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Description: The contents of s1 are placed in the string first,
 * followed by s2
 * if null is passed, it is treated as an empty string
 * Return: on success, returns a pointer to the contenated string
 * else if function fails, returns 0
 */
char *str_concat(char *s1, char *s2)
{
	int len1 = _strlen(s1);
	int len2 = _strlen(s2);
	int i = 0;
	char *tmp = 0;

	tmp = malloc((len1 + len2 + 1) * sizeof(char));
	if (tmp == 0)
	{
		return (0);
	}
	if (s1 == NULL && s2 == NULL)
	{
		tmp[0] = '\0';
		return (tmp);
	}
	for (i = 0; i < len1 &&
			(s1[i] != '\0' && s1 != 0); i++)
	{
		tmp[i] = s1[i];
	}
	for (; i < (len2 + len1) &&
			((s2[i - len1] != '\0') && (s2 != 0)); i++)
	{
		tmp[i] = s2[i - len1];
	}

	tmp[i] = '\0';

	return (tmp);
}
