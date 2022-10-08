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
	char *string_pos = s;

	if ((*string_pos) == '\0')
	{
		return (0);
	}
	else
	{
		string_pos++;
		return (1 + _strlen(string_pos));
	}
}
