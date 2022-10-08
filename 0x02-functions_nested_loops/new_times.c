#include "main.h"
#include "out_num.c"

/**
 * times_table - prints the 9 times table
 *
 * Returns: void
 */
void times_table(void)
{
	int a, b, d;

	for (a = 0; a <= 9; a++)
	{
		_putchar('0');
		_putchar(',');
		for (b = 1; b <= 9; b++)
		{
			if (a * b < 10)
			{
				_putchar(' ');
				_putchar(' ');
			}
			else
				_putchar(' ');
			out_num(a * b);
			if (b < 9)
				_putchar(d - d + ',');
		}
		_putchar('\n');
	}
}
