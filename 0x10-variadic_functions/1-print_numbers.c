#include "variadic_functions.h"

#include <stdio.h>

/**
 * print_numbers - prints the numbers sent to it, separated by a separator
 * @separator: string to be placed in between the numbers
 * @n: the number of items passed
 *
 * Description: if separator is NULL, don't print it.
 * Print a new line at the end of the function.
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list my_list;
	unsigned int i = 0;
	int value = 0;

	va_start(my_list, n);	/* important */

	if (separator == 0)
		separator = "";

	for (i = 0; (const unsigned int) i < n; i++)
	{
		value = va_arg(my_list, int);
		printf("%d", value);
		if ((const unsigned int) i < n - 1)
			printf("%s", separator);
	}
	va_end(my_list);	/* important */
	printf("\n");
}
