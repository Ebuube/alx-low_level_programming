#include "main.h"

#include "utility.c"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: string containing 1's and 0's
 *
 * Description: returns 0 if one or more chars in the string b that
 * is not 0 or 1
 * Return: the integral representation of the binary number in b,
 * or 0 if b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int binary = 0;
	unsigned int count = 0;

	if (!b)
	{
		return (0);
	}
	b = _rev_str(b);	/* reverse the string */
	for (; b[count]; count++)
	{
		if (!_isbin(b[count]))
		{
			return (0);
		}
		/* convert the current digit while considering its binary place */
		/* add the result to binary */
		binary += _todigit(b[count]) << count;
	}

	return (binary);
}
