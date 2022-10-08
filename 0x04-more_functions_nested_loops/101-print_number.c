#include "main.h"

/**
 * print_number - displays a number, digit-by-digit.
 * @n: number to print
 * Return: void
 */
void print_number(int n)
{
	unsigned int dummy = n;

	if (n < 0)
	{
		_putchar('-');
		dummy = -1 * n;
	}

	/**
	 * USING A RECURSION TO BREAK THE WHOLE NUMBER
	 * EXAMPLE: GIVEN 12345
	 * THIS RECURSIO BREAKS IT INTO
	 * 1, 12, 123, 1234, 12345
	 */
	if (dummy / 10 != 0)
		print_number(dummy / 10);

	/* DISPLAY THE LAST DIGIT OF EACH OF THOSE NUMBERS */
	_putchar((dummy % 10) + '0');
}
