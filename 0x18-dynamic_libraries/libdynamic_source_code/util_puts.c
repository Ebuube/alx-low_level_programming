#include "main.h"

/**
 * _puts - prints a string;
 * @str: string to print
 *
 * Description: Ends with a new line
 * Return: void
 */
void _puts(char *str)
{
	char *d_str = str;

	if ((*d_str) != '\0')
	{
		_putchar(*d_str);
		d_str++;
		_puts(d_str);
	}
	else
		_putchar('\n');
}
