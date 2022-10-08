#include "main.h"

/**
 * print_number - prints an integer
 * @n: the number to print
 * Description: uses only the _putchar function
 * scripts off the last digit and prints them in reverse order
 * Return: void
 */
void print_number(int n)
{
	int output = 0;

	if (n < 0)
	{
		_putchar('-');
		n = -1 * n;
	}
	if (n < 10 && n >= 0)
		_putchar(n + '0');
	else
	{
		output = n % 10;
		print_number(n / 10);
		_putchar(output + '0');
	}
}
