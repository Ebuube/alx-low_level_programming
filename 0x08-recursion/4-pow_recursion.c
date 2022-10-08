#include "main.h"

/**
 * _pow_recursion - calculates the value of x raised to the power or y
 * @x: the base
 * @y: the power
 *
 * Return: x raised to y
 * if y is less than 0, the function returns -1
 */
int _pow_recursion(int x, int y)
{
	int val = 0;

	if (y < 0)
	{
		return (-1);
	}
	if (x == 0 || x == 1)
	{
		return (x);
	}
	if (y == 0)
		val = 1;
	else
		val = x * _pow_recursion(x, y - 1);

	return (val);
}
