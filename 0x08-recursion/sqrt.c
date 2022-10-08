#include "main.h"
#include <stdio.h>

/* This macro guesses the approximate integral square root of a value */
#define guess(n, rough) (((rough) + (n) / (rough)) / 2)

/**
 * _sqrt - calculates the natural square root of a number
 * @n: the number to compute
 * Return: the natural square root of n, eg if n = 16, this returns 4.
 * if n is not a perfect square, -1 is returned
 */
int _sqrt(int n)
{
	int sqrt = 0, a = 0, b = n / 2;
	int i = 0;

	printf("Entered _sqrt() function\n"); /* test */
	if (n == 1 || n == 0)
	{
		return (n);
	}
	if (n < 0)
	{
		return (-1);
	}
	for (; ;)
	{
		printf("\tEntered while loop\n");
		a = guess(n, b);
		b = guess(n, a);
		if (a == b) /* found closest answer */
		{
			printf("\tClosest anser found\n");
			sqrt = (a * a == n) ? a : -1;
			break;
		}
	}
	return (sqrt);
}
