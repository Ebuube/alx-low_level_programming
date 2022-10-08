#include "main.h"

/**
 * print_square - prints a squrae using the # character
 * @size: the size of the square by number of # characters
 *
 * Description: A new line character follows
 * Return: void
 */
void print_square(int size)
{
	int a, b;

	if (size > 0)
		for (a = 0; a < size; a++)
		{
			for (b = 0; b < size; b++)
				_putchar('#');
			_putchar('\n');
		}
	else
		_putchar('\n');
}
