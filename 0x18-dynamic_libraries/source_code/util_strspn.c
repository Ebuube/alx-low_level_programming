#include "main.h"
#include <stdbool.h>

/**
 * _strspn - gets the length of a prefix substring
 * @s: the string to search
 * @accept: the matches to check
 * Return: number of bytes in the initial segment of s which consists only
 * of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	int step1, step2;
	unsigned int size = 0;
	bool flag = false;

	for (step1 = 0; s[step1] != '\0'; step1++)
	{
		flag = false;
		for (step2 = 0; accept[step2] != '\0'; step2++)
		{
			if (s[step1] == accept[step2])
			{
				flag = true;
				break;
			}
		}
		if (flag == false)
		{
			break;
		}
		else
		{
			size++;
		}
	}
	return (size * sizeof(char));
}
