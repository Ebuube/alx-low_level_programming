#include "main.h"

/**
 * _isdigit - A function that checks if a character is a digit.
 * @c: character to test
 *
 * Return: 1 if c is digit else 0
 */
int _isdigit(int c)
{
	return ((c >= '0' && c <= '9') ? 1 : 0);
}
