#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: the number to access
 * @index: the index of the bit to clear
 *
 * Description: index starts from the right-most bit, counted as index 0
 * Return: 1 if successful
 * else -1 if an error occured
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	size_t bit_field = sizeof(unsigned long int) * 8;
	/* sizeof returns in byte, multiply by eight to clear number of bits */

	/* check that index is within the range of the */
	/* number of bits in the variable n */
	if (index > bit_field - 1 || !(index + 1))
	{
		return (-1);
	}

	(*n) &= (~(1 << index));

	return (1);
}
