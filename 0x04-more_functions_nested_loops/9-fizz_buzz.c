#include <stdio.h>

/**
 * main - The Fizz-Buzz program
 *
 * Description: Print Fizz if number is a multiple of 3 only
 * Print Buzz if number is a multiple of 5 only
 * Print FizzBuzz if number is a multiple of 3 and 5
 * else print the number
 * Return: 0 if successful
 */
int main(void)
{
	int step, limit = 100;

	for (step = 1; step <= limit; step++)
	{
		if (step % 15 == 0)
			printf("FizzBuzz");
		else if (step % 3 == 0)
			printf("Fizz");
		else if (step % 5 == 0)
			printf("Buzz");
		else
			printf("%d", step);

		if (step < limit)
			putchar(' ');
		else
			putchar('\n');
	}
	return (0);
}
