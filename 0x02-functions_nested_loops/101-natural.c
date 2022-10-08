#include <stdio.h>

/**
 * main - prints the sum of all the natural numbers below 1024 that
 * are divisible by 3 or 5
 * Return: 0 if successful
 */
int main(void)
{
	int a, sum = 0;

	for (a = 1; a < 1024; a++)
		sum = ((a % 3 == 0) || (a % 5 == 0)) ? sum + a : sum;
	printf("%d\n", sum);
	return (0);
}
