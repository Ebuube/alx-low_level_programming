#include "utility.h"

/**
 * _rev_str - reverses a string
 * @str: the string to reverse
 *
 * Description: this is a non-destructive reversion,
 * the returned string is modifyable.
 * Return: pointer to the reversed string, or NULL if string is NULL or
 * function fails
 */
char *_rev_str(const char *str)
{
	char *mystr = 0;

	mystr = strdup(str);
	if (!mystr)
	{
		return (0);
	}
	mystr = strrev(mystr);

	return (mystr);
}
