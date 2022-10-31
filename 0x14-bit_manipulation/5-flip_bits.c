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
	size_t index = (sizeof(unsigned long int) * 8) - 1;
	unsigned int count = 0;

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

	return (count);

#ifdef _FLIPS_
	difference = n ^ m;

	for (; difference; )
	{
		difference &= (difference - 1);
		counter++
	}
#endif
}
