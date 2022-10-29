#include "main.h"

typedef unsigned long int data_t;

/**
 * print_binary - prints the binary representation of a number
 * @n: the number to represent
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	size_t pos = (sizeof(data_t) * 8) - 1;
	/* Subtract 1 because index starts from 0 */

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	for (; !_getBit(n,pos);)
		--pos;

	for (; (pos + 1); --pos)
		_putchar(_getBit(n,pos) + '0');
}
