#include "main.h"

/**
 * factorial - calculates the factorial of any number
 * @n: number  to compute
 *
 * Return: factorial of n,
 * if n is less than zero, returns -1
 */
int factorial(int n)
{
	int fact = 0;

	if (n < 0)
	{
		return (-1);
	}
	if (n == 1)
	{
		return (1);
	}
	else
		fact = n * factorial(n - 1);

	return (fact);
}
