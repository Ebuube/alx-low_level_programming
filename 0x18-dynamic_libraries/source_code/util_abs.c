#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @a: The element to test
 *
 * Return: Returns the absolute value.
 */
int _abs(int a)
{
	if (a >= 0)
		return (a);
	else
		return (-1 * a);
}
