#include "variadic_functions.h"

/**
 * print_all - a function that prints anything using a specified format string
 * @format: format of the variable list
 *
 * Description: c = char, i = integer, f = float, s = char * (if the string is
 * NULL, print (nil) instead
 * Any other character should be ignored
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list my_list;
	int i = 0;
	char *str = 0;

	if (!format)
	{
		printf("\n");
		return;
	}

	va_start(my_list, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(my_list, char));
				break;
			case 'i':
				printf("%d", va_arg(my_list, int));
				break;
			case 'f':
				printf("%f", va_arg(my_list, float));
				break;
			case 's':
				str = va_arg(my_list, char *);
				if (!str)
					str = "(nil)";
				printf("%s", str);
				break;
			default:
		}
	}
}

