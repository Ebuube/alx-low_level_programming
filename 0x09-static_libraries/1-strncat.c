#include "main.h"

int _strlen(char *s); /* function prototype */

/**
 * _strncat - concatenates n bytes from src string to dest string
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to copy from src string
 * Return: Returns a pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *dest_head = dest;

	n = (n > _strlen(src)) ? _strlen(src) : n;
	while (*dest != '\0')
		dest++; /* advance to the end of dest */
	while (n-- > 0)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0'; /* inserting null terminator */
	return (dest_head);
}

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
