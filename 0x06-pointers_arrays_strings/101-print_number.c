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
	unsigned int val = 0;

	if (n < 0)
	{
		_putchar('-');
		val = -1 * n;
	}
	else
	{
		val = n;
	}

	if (val / 10 != 0)
		print_number(val / 10);

	_putchar((val % 10) + '0');
}
