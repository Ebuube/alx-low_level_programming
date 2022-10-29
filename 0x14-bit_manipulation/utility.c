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


/**
 * _truncate - truncates the leading zero in a string of bits
 * @str: the string to compute
 *
 * Description: note this is a non-destructive function
 * Return: the trunctate string or NULL if function fails
 */
char *_truncate(const char *str)
{
	char *my_str = 0;
	int c = 0;

	while (!str[c])
		c++;
	my_str = strdup(&str[c]);
	return (my_str);
}
