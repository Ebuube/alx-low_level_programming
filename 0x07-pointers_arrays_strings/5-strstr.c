#include "main.h"
#include <stdbool.h>

/**
 * _strstr - locates the first occurence of string needle in string haystack
 * @haystack: the string to search for matches
 * @needle: the string containing required matches
 * Description: If length of needle is 0, the function returns haystack
 * Return: pointer to the first location of needle in haystack
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0, j = 0;
	char *result_n = 0;
	bool match = false;

	if (*needle == '\0')
	{
		return (haystack);
	}
	for (i = 0; *haystack != '\0'; i++)
	{
		if (needle[j] == '\0')
			break;
		if (haystack[i] == needle[j])
		{
			j++;
			match = true;
		}
		else
		{
			j = 0;
			match = false;
		}
	}
	result_n = (match = true) ? &haystack[i - j] : 0;
	return (result_n);
}
