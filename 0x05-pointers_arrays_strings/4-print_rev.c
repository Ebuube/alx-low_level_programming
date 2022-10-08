#include "main.h"
#include "2-strlen.c"
#include <stdlib.h>

/**
 * print_rev - prints a string in reverse order
 * @s: string to print
 * Description: Ends with a new line character.
 * Return: void
 */
void print_rev(char *s)
{
	int len = _strlen(s);
	char *d_s = NULL, *dummy = s, *holder = NULL;

	if (len == 0)
		goto end;

	d_s = (char *) malloc(len + 1);
	holder = d_s;
	while ((*dummy) != '\0')
	{
		(*d_s) = (*dummy);
		dummy++;
		d_s++;
	}

	d_s--; /* to remove the unknown memory value */

	while (d_s != holder)
	{
		_putchar(*d_s);
		d_s--;
	}
	d_s = holder;
	_putchar(*d_s);
end:	_putchar('\n');
}
