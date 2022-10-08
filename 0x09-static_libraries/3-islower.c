#include "main.h"

/**
 * _islower - checks for lowercase letter
 * @c: The character to check
 *
 * Return: 1 if lowercase
 * 0 if not lowercase
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
