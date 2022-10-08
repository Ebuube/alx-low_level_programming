#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: the array
 * @n: the number of elements in the array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int start = 0, dummy = 0;

	for (start = 0; start < n / 2; start++)
	{
		dummy = a[start];
		a[start] = a[n - start - 1];
		a[n - start - 1] = dummy;
	}
}
