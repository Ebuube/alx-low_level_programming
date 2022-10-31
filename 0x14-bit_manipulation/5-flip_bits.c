#include "main.h"
#include "utility.c"

/**
 * flip_bits - calculates the number of bits you would need to flip/change
 * to get from one number to another
 * @n: the first number
 * @m: the second number
 *
 * Return: the result of the calculation
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int change = 0;
	unsigned int count = 0;

#ifdef _FLIPS_
	size_t index = (sizeof(unsigned long int) * 8) - 1;

	change = n ^ m;
	/* gets where bit started from the left */
	/* avoids index being less than 0 */
	for (; !(change & (1 << index)) && (index + 1);)
		--index;

	for (; (index + 1) > 0; --index)
	{
		if (change & (1 << index))
			count++;
	}
#endif

	change = n ^ m;

	for (; change; )
	{
		change &= (change - 1);
		count++;
	}

	return (count);
}
