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
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *string = NULL;
	unsigned int i = 0, len = 0, len2 = 0;

	while (s1[i])
		len++, i++;
	len += n;
	i = 0;
	while (s2[i])
		len2++, i++;

	string = (char *) malloc(len * sizeof(char));
	i = 0;	/* copying the characters */
	while (s1[i])
		string [i] = s1[i], i++;
	if (n >= len2)
		n = len2;
	while (n > 0)
	{
		string[i] = s2[i];
		i++, n--;
	}
	return (string);
}
