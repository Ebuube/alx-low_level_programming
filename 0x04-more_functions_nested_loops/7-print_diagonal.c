#include "main.h"

/**
 * print_diagonal - prints diagonals on the terminal
 * @n: The number of times the diagonal should be printed
 *
 * Description: If n is 0 or less, only a newline character is printed
 * Return: void
 */
void print_diagonal(int n)
{
	int a, b;

	if (n > 0)
	{
		for (a = 0; a < n; a++)
		{
			for (b = 0; b < a; b++)
				_putchar(' ');
			_putchar('\\');
			if (a != n - 1)
				_putchar('\n');
		}
	}
	_putchar('\n');
}
