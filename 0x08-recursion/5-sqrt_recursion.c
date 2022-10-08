#include "main.h"
#define guess(n, rough) (((rough) + (n) / (rough)) / 2) /* find approx root */
/**
 * find_sqr - helper function to calculate the square root of a number
 * @n: the number to find its square root
 * @prev: previous value of find_sqr
 * @current: current rough value
 * Return: return the square root of the number n
 */
int find_sqr(int n, int prev, int current)
{
	int ans = 0;

	if (prev == current)
		ans = (prev * prev == n) ? prev : -1;
	else
		ans = find_sqr(n, current, guess(n, current));
	return (ans);
}
/**
 * _sqrt_recursion - calculates the natural square root of a number
 * @n: the number to compute
 * Return: the natural square root of n, eg if n = 16, this returns 4.
 * if n is not a perfect square, -1 is returned
 */
int _sqrt_recursion(int n)
{
	int sqrt = 0;

	if (n == 1 || n == 0)
	{
		return (n);
	}
	if (n < 0)
	{
		return (-1);
	}
	sqrt = find_sqr(n, 0, n / 2);
	return (sqrt);
}
