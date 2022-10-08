#include <stdio.h>

/**
 * main - a program that prints all single digit numbers of base 10
 * starting from 0, followed by a newline.
 *
 * Return: Returns 0 if successful.
 */
int main(void)
{
	int digit;
	int base = 10;

	for (digit = 0; digit < base; digit++)
		putchar(digit + '0');
	putchar('\n');

	return (0);
}
