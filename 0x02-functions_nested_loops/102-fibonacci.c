#include <stdio.h>

/**
 * main - Prints the first 50 fibonacci numbers
 *
 * Return: 0 if successful.
 */
int main(void)
{
	long int num, prev_1 = 1, prev_2 = 2, limit = 50, step;

	printf("1, 2, ");
	for (step = 0; step < limit - 2; step++)
	{
		num = prev_1 + prev_2;
		if (step != limit - 3)
			printf("%lu, ", num);
		else
			printf("%lu\n", num);
		prev_1 = prev_2;
		prev_2 = num;
	}
	return (0);
}
