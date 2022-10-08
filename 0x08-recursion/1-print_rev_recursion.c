#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: the string to print
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return; /* with no value because functio returns void */
	}
	else
	{
		s++;
		_print_rev_recursion(s);
		_putchar(*(s - 1));
	}
}
