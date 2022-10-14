#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its paramters
 * @n: the number of variable list
 *
 * Return: the sum of all the parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list my_list;
	int i = 0, sum = 0;

	if (n == 0)
	{
		return (0);
	}

	va_start(my_list, n);
	for (i = 0; (const unsigned int)i < n; i++)
	{
		sum += va_arg(my_list, int);
	}
	va_end(my_list);

	return (sum);
}
