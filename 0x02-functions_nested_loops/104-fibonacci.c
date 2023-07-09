#include <stdio.h>

/**
 * main - Prints the first 98 fibonacci numbers
 *
 * Return: 0 if successful.
 */
int main(void)
{
	long double num = 0, prev_2 = 1, prev_1 = 2;
	int limit = 98, step;

	printf("1, 2, ");
	for (step = 2; step < limit; step++)
	{
		num = prev_1 + prev_2;
		printf("%0.0Lf", num);
		if (step != limit - 1)
			printf(", ");

		prev_2 = prev_1;
		prev_1 = num;
	}
	putchar('\n');
	return (0);
}
