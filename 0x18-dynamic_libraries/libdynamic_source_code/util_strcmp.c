#include "main.h"
#include <stdio.h>
/**
 * _strcmp - compares s1 string to s2 string
 * @s1: first string
 * @s2: second string
 * Return: Returns (0) if s1 is equal to s2
 * else, returns (> 0) if s1 is greated than s2
 * else, returns (< 0) if s1 is less than s2
 */
int _strcmp(char *s1, char *s2)
{
	int val = 0;

	if ((*s1 == '\0') && (*s2 != '\0'))
	{
		val = -1;
	}
	else if ((*s2 == '\0') && (*s1 != '\0'))
	{
		val = 1;
	}
	else if ((*s1 == '\0') && (*s2 == '\0'))
	{
		val = 0;
	}
	else
	{
		val = (*s1) - (*s2);
		if (val != 0)
			return (val);
		s1++;
		s2++;
		val = _strcmp(s1, s2);
	}
	return (val);
}
