#include "main.h"
#include "out_num.c"

/**
 * print_times_table - prints the n times table
 * @n: The times table to print
 * Returns: void
 */
void print_times_table(int n)
{
	int a, b, d;

	if (n == 0)
	{
		_putchar('0');
		_putchar('\n');
		goto final;
	}
	else if (n < 0 || n > 15)
		goto final;
	for (a = 0; a <= n; a++)
	{
		_putchar('0');
		_putchar(',');
		for (b = 1; b <= n; b++)
		{
			if (a * b < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
			}
			else if (a * b >= 10 && a * b < 100)
			{
				_putchar(' ');
				_putchar(' ');
			}
			else
				_putchar(' ');
			out_num(a * b);
			if (b < n)
				_putchar(d - d + ',');
		}
	_putchar('\n');
	}
final:	a = a + b;
}
