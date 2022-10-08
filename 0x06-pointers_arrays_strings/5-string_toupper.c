#include "main.h"

/**
 * string_toupper - converts all lowercase letters in a string to uppercase
 * @str: the string to convert
 * Return: returns a pointer to the string.
 */
char *string_toupper(char *str)
{
	char *str_head = str;
	int start = 0;

	for (start = 0; str[start] != '\0'; start++)
	{
		if (str[start] >= 'a' && str[start] <= 'z')
			str[start] += ('A' - 'a');
	}
	return (str_head);
}
