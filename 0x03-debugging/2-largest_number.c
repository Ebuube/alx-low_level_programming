#include "main.h"
#include <limits.h>

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest = INT_MIN;

	largest = (a > b && a > c) ? a : largest;
	if (largest != INT_MIN)
		goto end;
	largest = (b > a && b > c) ? b : largest;
	if (largest != INT_MIN)
		goto end;
	largest = (c > b && c > a) ? c : largest;
	if (largest != INT_MIN)
		goto end;
	largest = ((a == b) == c) ? a : largest;
	if (largest != INT_MIN)
		goto end;
	largest = ((a == b) != c) ? (a > c ? a : c) : largest;
	if (largest != INT_MIN)
		goto end;
	largest = ((a == c) != b) ? (a > b ? a : b) : largest;
	if (largest != INT_MIN)
		goto end;

end:	a = a + b + c; /* Just to enable the line label */
	return (largest);
}
