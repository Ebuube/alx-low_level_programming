#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 * @a: Pointer to the array
 * @n: number of elements to print
 * Description: Ends with a new line.
 * Return: void
 */
void print_array(int *a, int n)
{
	int *dummy = a;
	int step = 0;

	if (n < 1)
		printf("\n");
	else
	{
		for (step = 0; step < n - 1; step++)
		{
			printf("%d, ", *dummy);
			dummy++;
		}
		printf("%d\n", *dummy);
	}
}
