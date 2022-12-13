#include "main.h"

/**
 * _strcat - concatenates source string to the end of the destination string
 * @dest: destination string
 * @src: source string
 * Return: A pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	char *dest_head = dest;

	while (*dest != '\0')
		dest++;	/* advance to the end of the dest string */
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (dest_head);
}
