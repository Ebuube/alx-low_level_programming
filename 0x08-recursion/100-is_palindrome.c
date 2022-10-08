#include "main.h"
#include "strlen.c"

/**
 * check_palindrome - helper function to check if a string is prime
 * @s: the string
 * @start: the index of the string to start from
 * Return: 1 if string palindrom else 0
 */
int check_palindrome(char *s, int start)
{
	int size_s = _strlen(s), val = 0;

	if (start >= (size_s / 2) + 1)
	{
		return (1);
	}
	val = (s[start] == s[size_s - start - 1]) ? start++,
	    check_palindrome(s, start) : 0;

	return (val);
}

/**
 * is_palindrome - checks if a string is a palindrom
 * @s: the string to compute
 * Description: an empty string is a palindrome
 * Return: 1 if a string is a palindrom, else 0
 */
int is_palindrome(char *s)
{
	if (s == 0 || (*s) == '\0')
	{
		return (1);
	}
	return (check_palindrome(s, 0));
}
