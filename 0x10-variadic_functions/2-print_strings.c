#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line
 * @separator: what to use to separate the strings
 * @n: the number of strings passed
 *
 * Description: if separator is NULL, don't print it
 * if one of the strins is NULL, it prints (nil) instead
 * A new line is printed at the end of the function
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list my_list;
	char *value = 0;
	int i = 0;

	va_start(my_list, n);

	if (!separator)
		separator = "";
	for (i = 0; (const unsigned int) i < n; i++)
	{
		value = va_arg(my_list, char *);
		if (value == 0)
			value = "(nil)";

		printf("%s", value);
		if ((const unsigned int) i < n - 1)
			printf("%s", separator);
	}
	va_end(my_list);
	printf("\n");
}

