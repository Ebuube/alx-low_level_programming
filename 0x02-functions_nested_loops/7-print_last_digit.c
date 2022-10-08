#include "main.h"
#include <limits.h>

/**
 * print_last_digit - prints the last digit of a number
 * @n: number to compute
 *
 * Description: It works with the absolute value of its argument
 * Return: Returns the value of the last digit
 */
int print_last_digit(int n)
{
	if (n < 0)
		n = -1 * n;
	if (n == INT_MIN)
	{
		_putchar('8');
		return (8);
	}
	n = n % 10;
	_putchar(n + '0');
	return (n);
}
