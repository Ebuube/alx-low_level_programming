#include "main.h"

/**
 * _strlen - calculates the length of a string
 * @s: string to compute
 *
 * Description: the null character is not included
 * Return: length of string
 */
int _strlen(char *s)
{
	int len = 0;

	if (s == 0)
	{
		return (0);
	}
	while(s[len] != 0 && s[len] != '\0')
		len++;

	return (len);
}
