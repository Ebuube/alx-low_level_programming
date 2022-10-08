#include "main.h"

/**
 * find_prime - recursively checks if a number is prime
 * @n: the number to verify
 * @d: the divisor to use for the verification
 * Return: 1 if n is prime else 0
 */
int find_prime(int n, int d)
{
	int val = 0;

	if (d == 1)
	{
		return (1);
	}
	if (n % d == 0)
	{
		val = 0;
	}
	else
	{
		val = find_prime(n, d - 1);
	}
	return (val);
}

/**
 * is_prime_number - finds out if an integer is a prime number
 * @n: number to compute
 * Return: 1 if the number is prime, else, return 0
 */
int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	return (find_prime(n, n - 1));
}
