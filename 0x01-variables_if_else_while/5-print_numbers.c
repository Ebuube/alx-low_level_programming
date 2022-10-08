#include <stdio.h>

/**
 * main - a program that prints all single digit numbers of base 10
 * starting from 0, followed by a new line.
 *
 * Return: Return 0 if successful.
 */
int main(void)
{
	int base = 10;
	int digit = 0;

	putchar('0');
	for (digit = 1; (digit % base) != 0; digit++)
		printf("%d", digit);
	putchar('\n');
	return (0);
}
