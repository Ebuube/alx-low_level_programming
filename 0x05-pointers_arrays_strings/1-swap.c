#include "main.h"

/**
 * swap_int - swaps the value of two integers
 * @a: the first item
 * @b: the second item
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int dummy = (*a);

	(*a) = (*b);
	(*b) = dummy;
}
