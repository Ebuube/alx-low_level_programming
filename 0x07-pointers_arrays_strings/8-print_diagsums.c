#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of
 * a square matrix of integers.
 * @a: pointer to the matrix
 * @size: type of matrix e.g size = 2 is for a 2 x 2 matrix
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i = 0, l = 0, r = size - 1;
	long left_diag_sum = 0;
	long right_diag_sum = 0;

	for (i = 0; i < size; i++)
	{
		/* left_diag_sum += a[i][l++]; */
		left_diag_sum += *(a + (i * size + (l++)));

		/* right_diag_sum += a[i][r--]; */
		right_diag_sum += *(a + (i * size + (r--)));
	}
	printf("%ld, %ld\n", left_diag_sum, right_diag_sum);
}
