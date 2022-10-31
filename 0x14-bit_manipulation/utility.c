#include "utility.h"


/**
 * _count_set_bits - counts the number of bits having '1' as value in a number,
 * starting from the leftmost non-zero bit in the number's binary
 * representation
 *
 * Description: index starts from 0, being the index of rightmost bit
 * Return: the result of the calculation
 */
int _count_set_bits(unsigned long int n)
{
	size_t index = (sizeof(unsigned long int) * 8) - 1;
	unsigned int count = 0;

	/* gets where bit started from the left */
	/* avoids index being less than 0 */
	for (; !(n & (1 << index)) && (index + 1);)
		--index;

	for (; (index + 1) > 0; --index)
	{
		if (n & (1 << index))
			count++;
	}

	return (count);
}


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
	size_t count = 0, len = 0;

	mystr = strdup(str);
	len = strlen(str);
	if (!mystr)
	{
		return (0);
	}
	/* reversal */
	for (count = 0; (len + 1); count++, len--)
		mystr[count] = str[len];

	mystr[count] = '\0';

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
