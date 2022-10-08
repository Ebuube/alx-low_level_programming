#include "main.h"
#include <stdlib.h>
#include "stringify.c"
/**
 * infinite_add - adds two numbers together
 * @n1: the first number in form of string
 * @n2: the second number in form of string
 * @r: the result of the addition in form of string
 * @size_r: the size of the buffer, r, which will store the result
 * Return: pointer to r, else if the result cannot be stored in r,
 * the function returns 0
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	long num1 = atoi(n1), num2 = atoi(n2), result = num1 + num2;
	int count;
	long dummy = result;

	while (dummy > 0)
	{
		dummy /= 10;
		count++;
	}
	if ((unsigned int) count > (size_r / sizeof(char)))
	{
		return (0);
	}
	else
	{
		r = stringify(result, r, size_r);
		return (r);
	}
}
