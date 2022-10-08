#include "main.h"

/**
 * print_triangle - prints a triangle using the # character
 * @size: The size of the triangle
 *
 * Return: void
 */
void print_triangle(int size)
{
	int a, b, step;

	if (size > 0)
	{
		for (step = 0; step < size; step++)
		{
			for (a = 0; a <= size - (step + 2); a++)
				_putchar(' ');
			for (b = 0; b <= step; b++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
