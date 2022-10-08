#include <stdio.h>

/**
 * main - Prints the sum of the terms of the fibonacci sequence
 * which are even and are not greater than 4 000 000
 *
 * Return: 0 if successful.
 */
int main(void)
{
	long int num, prev_1 = 1, prev_2 = 2, limit = 4000000;
	long int sum = 0;

	sum = 2;
	for (; ;)
	{
		num = prev_1 + prev_2;
		if (num > limit)
			break;
		sum = (num % 2 == 0) ? sum + num : sum;

		prev_1 = prev_2;
		prev_2 = num;
	}
	printf("%ld\n", sum);
	return (0);
}
