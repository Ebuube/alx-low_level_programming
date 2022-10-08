#include <stdio.h>

/**
 * main - prints the largest prime factor of the number 612852475143
 * Return: 0 if successful
 */
int main(void)
{
	long number = 612852475143, largest_prime = 0, divisor = 2;

	while (number != 1)
	{
		number = (number % divisor == 0) ? (largest_prime = divisor),
		       number / divisor : number;
		divisor++;
	}
	printf("%ld\n", largest_prime);
	return (0);
}
