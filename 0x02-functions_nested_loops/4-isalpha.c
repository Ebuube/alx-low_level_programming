#include "main.h"

/**
 * _isalpha - Checks if a character is either in lowercase or uppercase
 * @c: The character to test
 *
 * Return: 1 if in lowercase or uppercase
 * 0 if not in either lowercase or uppercase
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

