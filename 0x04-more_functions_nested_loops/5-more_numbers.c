#include "main.h"
#include "out_num.c"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14,
 * followed by a new line.
 *
 * Return: void
 */
void more_numbers(void)
{
	short a, b;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b <= 14; b++)
			out_num(b);
		_putchar('\n');
	}
}
