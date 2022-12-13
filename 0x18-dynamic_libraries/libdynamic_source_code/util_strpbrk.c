#include "main.h"

/**
 * _strpbrk - locates the first occurence of any element of accept string
 * in s string
 * @s: the string to search
 * @accept: string contianing characters to match against
 *
 * Description: Null is not a match item for this function
 * Return: if any match found, returns a pointer to the first match
 * in string s, else NULL is returned
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0, j = 0;
	char *result = 0;

	if (s == 0 || accept == 0)
		goto end;
	while (s[i] != '\0')
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				result = &s[i];
				break;
			}
			if (result != 0)
				break;
		}
		i++;
		if (result != 0)
			break;
	}
end:	return (result);
}
