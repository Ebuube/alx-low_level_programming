#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: the number to access
 * @index: the index of the bit to return
 *
 * Description: index starts from the right-most bit, counted as index 0
 * Return: the value of the bit at specified index
 * else -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	size_t bit_field = sizeof(unsigned long int) * 8;
	/* sizeof returns in byte, multiply by eight to get number of bits */

	/* check that index is within the range of the */
	/* number of bits in the variable n */
	if (index > bit_field - 1 || !(index + 1))
	{
		return (-1);
	}

	return ((n >> index) & 1);
}
