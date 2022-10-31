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
	unsigned int flips = 0;

	flips = _count_set_bits(n ^ m);	/* gives the difference b/t n and m */

	return (flips);
}
