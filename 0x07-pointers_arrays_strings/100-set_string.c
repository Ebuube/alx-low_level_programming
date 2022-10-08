#include "main.h"

/**
 * set_string - updates the value of a pointer to a char
 * @s: string containing character to be updated
 * @to: value to use for update
 *
 * Return: void
 */
void set_string(char **s, char *to)
{
	*s = to;
}
