#include "function_pointers.h"

/**
 * print_name - prints name by calling the function passed to it and the string
 * @name: the string to print
 * @f: the function to use and print it
 *
 * Description: cross check if null is passed as function pointer
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != 0)
	{
		f(name);
	}
}
