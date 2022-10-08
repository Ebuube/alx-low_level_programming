#include "main.h"

/**
 * _strlen_recursion - finds the length of a string
 * @s: the string
 *
 * Return: the length of a string
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		s++;
		len = 1 + _strlen_recursion(s);
	}
	return (len);
}
