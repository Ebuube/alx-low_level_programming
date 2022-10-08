#include "main.h"
#include <math.h>
#include <ctype.h>

/**
 * read_int - reads ourt
/**
 * convert_to_int - converts a string containing only digit to integer
 * @str: string to convert
 * @base: the base the digits should be converted to raised to the power
 * of the length of the string
 * Return: the integer-valu
 */
int convert_to_int(char *str, int base)
{
	char *dummy = str;
	int val = 0;

	if (!isdigit(dummy))
	{
		return (0);
	}
	else
	{
		val = ((*dummy) - '0');
		return (val * base + convert_to_int(++dummy, base / 10));
	}
}
/**
 * _atoi - converts a string to an integer
 * @s: the string to convert
 * Description: It takes into account all the - and + signs before the number
 * If there are no numbers in the string, the function must return 0
 * The number can be preceded by an infinite number of characters.
 * Return: the integer
 * PLAN
 * Take away all the preceeding characters until a + or - sign is recieved
 * If the sign is not followed by another sign or digit,
 * then discard
 */
int _atoi(char *s)
{
	char *value = read_int(s);
	int step = 0, sign = +1, num = 0;

	num = convert_to_int(value, pow(10, _strlen(value)));
	return (num);
}
