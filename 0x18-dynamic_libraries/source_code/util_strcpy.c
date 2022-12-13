#include "main.h"

/**
 * _strcpy - copies the string from src to dest
 * @dest: destination string
 * @src: source string
 * Description: Includes the null character
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	char *dest_holder = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (dest_holder);
}
