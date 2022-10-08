#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: pointer to the board to print
 *
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int i = 0, j = 0, size = 8;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
			_putchar(a[i][j]);
		_putchar('\n');
	}
}
