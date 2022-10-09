#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat -concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * @n: the number of bytes of s2 to concatenate with s1
 * Description: if n is greater or equal to the length of s2
 * then uset the entire string s2
 * If NULL is passed, treat as an empty string
 * Return: the concatenated string or NULL on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *string = NULL;
	unsigned int c_i = 0, c_j = 0, len1 = 0, len2 = 0;

	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;
	len1 = (s1 == NULL || s1[0] == '\0') ? 0 : len1;
	len2 = (s2 == NULL || s2[0] == '\0') ? 0 : len2;
	if (n < len2)
		string = malloc((len1 + n + 1) * sizeof(char));
	else
		string = malloc((len1 + len2 + 1) * sizeof(char));

	if (string == NULL)
	{
		return (NULL);
	}
	while (c_i < len1)
		string[c_i] = s1[c_i], c_i++;
	while (n < len2 && c_i < (len1 + n))
	{
		string[c_i] = s2[c_j];
		c_i++;
		c_j++;
	}

	string[c_i] = '\0';

	return (string);
}
