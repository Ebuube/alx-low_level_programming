#include "main.h"
#include "2-strlen.c"
#include <stdlib.h>

/**
 * rev_string - reverses a string
 * @s: string to reverse
 * Return: void
 */
void rev_string(char *s)
{
	int len = _strlen(s);
	char *d_s = NULL, *dummy = s, *holder = NULL, *s_holder = s;

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
		(*s) = (*d_s);
		d_s--, s++;
	}
	d_s = holder, (*s) = (*d_s);
	(*(++s)) = '\0'; /* string terminator */
end:	s = s_holder;
}
