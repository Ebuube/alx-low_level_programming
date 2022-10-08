#include <stdlib.h>
#include "2-strlen.c"
#include <ctype.h>

/**
 * read_str - reads the integer-convertible part of a string
 * @str: string to read
 * Description: leading white spaces are removed
 * Return: null if no convertible part found
 * else returns the convertible part
 */
char *read_str(char *str)
{
	char *str_head = NULL, *str_read = NULL;
	short sign = +1;

	str_read = (char *) malloc(_strlen(str) + 1);
	str_head = str_read;
	sign = get_sign(str);
	while (isspace(str_read) || *str_read == '+'
			|| *str_read == '-')
		str_read++;
	while ((*str_read) != '\0')
	{
		if (isspace(*str))
			str++, continue;
		if (*str >= '0' && *str <= '9')
			*str_head = (*str) - '0';
		str++;
		str_read++;
	}
	*str_read = '\0'; /* inserting terminator */
	return (str_head);
}
