#include "main.h"

/**
 * print_line - prints line on the terminal
 * @n: The number of times the underscore should be printed to form a line
 *
 * Description: If n is 0 or less, only a newline character is printed
 * Return: void
 */
void print_line(int n)
{
	int a;

	if (n > 0)
		for (a = 0; a < n; a++)
			_putchar('_');
	_putchar('\n');
}
