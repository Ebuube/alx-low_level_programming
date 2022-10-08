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
/**
 * _strncpy - copies n bytes of data from source to destination string
 * @dest: destination string
 * @src: source string
 * @n: number of bytes of character to copy
 * Return: Returns a pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *dest_head  = dest;
	int start = 0;

	if (n == 0)
	{
		return (dest_head);
	}
	else if ((n != 0) & (*src == '\0'))
	{
		for (start = 0; start < n; start++)
			dest[start] = '\0';
	}
	else
	{
		*dest = *src;
		dest++;
		src++;
		_strncpy(dest, src, n - 1);
	}
	return (dest_head);
}
