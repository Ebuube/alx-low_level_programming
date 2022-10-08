#include <stdio.h>

/**
 * main - a program that prints all possible combinations
 * of single-digit numbers.
 *
 * Return: Returns 0 if successful.
 */
int main(void)
{
	int digit;

	for (digit = 0; digit <= 9; digit++)
	{
		putchar(digit + '0');
		if (digit != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
