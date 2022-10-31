#include "main.h"

#define DATA_T (unsigned long int)

/**
 * print_binary - prints the binary representation of a number
 * @n: the number to represent
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	size_t pos = (8 * sizeof DATA_T) - 1;
	/* Subtract 1 because index starts from 0 */

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	for (; !_getBit(n, pos); )
		--pos;

	for (; (pos + 1); --pos)
		_putchar(_getBit(n, pos) + '0');
}
