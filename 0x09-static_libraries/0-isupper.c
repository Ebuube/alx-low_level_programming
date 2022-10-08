#include "main.h"

/**
 * _isupper - A function to check for uppercase character.
 * @c: The character to check
 *
 * Return: 1 if c is uppercase else 0
 */
int _isupper(int c)
{
	return ((c >= 'A' && c <= 'Z') ? 1 : 0);
}
