#include "main.h"
#include "out_num.c"

/**
 * print_to_98 - prints all natural number from n to 98
 * @n: number to start from
 *
 * Return: void
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			if (n < 0)
			{
				_putchar('-');
				out_num(-1 * n);
			}
			else
				out_num(n);
			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		goto end;
	}
	if (n >= 98)
		for (; n >= 98; n--)
		{
			out_num(n);
			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
end:	_putchar('\n');
}
