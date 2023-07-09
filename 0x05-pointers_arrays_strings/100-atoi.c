#include "main.h"
#include <stdio.h>	/* test */


/* FUNCTION PROTOTYPES */

int _getsign(char *s, unsigned int *i);
unsigned int _getnum(char *s, unsigned int *i);


/**
 * _atoi - scrape out an integer from a string
 * @s: string to search
 *
 * Return: the number found, else, 0
 */
int _atoi(char *s)
{
	int sign = 1, i = 0, num = 1;

	sign = _getsign(s, (unsigned int *)&i);
	num = _getnum(s, (unsigned int *)&i);

	printf("sign = %d | num = %d\n", sign, num);

	num *= sign;	/* apply sign */

	return (num);
}

/**
 * _isdigit - check if a character is a valid digit 0-9
 * @c: character to test
 *
 * Return: 1 if true else 0
 */
int _isdigit(char c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}

	return (0);
}

/**
 * _isspace - check if a character is a space ' ' or horitzontal/vertical tab
 * @c: character to test
 *
 * Return: 1 if true else 0
 */
int _isspace(char c)
{
	if (c == ' ' || c == '\v' || c == '\t')
	{
		return (1);
	}

	return (0);
}


/**
 * _getsign - calculate the sign from a string
 * @s: string to access
 * @pos: address of position to start searching from
 *
 * Description: pos is updated to show current position search stopped
 * Return: +1 if sign is positive, -1 if sign is negative, else 0 no sign found
 */
int _getsign(char *s, unsigned int *pos)
{
	int sign_found = 0, sign = 1, i = 0;

	if (pos == NULL)
	{
		return (0);
	}
	i = (*pos);

	for (i = 0; s != 0 && s[i] != '\0'; i++)
	{
		printf("_getsign(): pos = %d\tchar = '%c'\n", i, s[i]);	/* test */
		if (s[i] == 32 && sign_found == 1 && !(s[i] >= 48 && s[i] == 57))	/* space */
		{/* space found between signs */
			continue;
		}
		if (s[i] != 43 && s[i] != 45 && !(s[i] >= 48 && s[i] <= 57))
		{/* check against characters except '+' '-' */
			if (sign_found == 1)
			{/* a character intercepted sign and digits */
				sign = 1;
			}
			printf("_getsign(): char gotten = '%c'\n", s[i]);	/* test */
			continue;
		}

		if (s[i] == 43)		/* positive sign */
		{
			sign *= +1;
			sign_found = 1;
		}
		if (s[i] == 45)		/* negative sign */
		{
			sign *= -1;
			sign_found = 1;
		}

		printf("_getsign(): sign = '%d'\n", sign);	/* test */

		if ((s[i] >= 48 && s[i] <= 57))	/* digit */
			break;
		printf("_getsign(): sign_found = %d\n", sign_found);	/* test */
	}

	(*pos) = i;	/* update position */

	return (sign);
}

/**
 * _getnum - scrape out an integer from a string
 * @s: string to search
 * @pos: address of position to start searching from
 *
 * Description: signs are not considered
 * pos is updated
 *
 * Return: the unsigned integer gotten, else 0 if no integer found
 */
unsigned int _getnum(char *s, unsigned int *pos)
{
	unsigned int num = 0;
	int digit_found = 0, i = 0;

	if (pos == NULL)
	{
		return (0);
	}
	i = (*pos);

	for (; s != 0 && s[i] != '\0'; i++)
	{
		printf("_getnum(): pos = %d\tchar = '%c'\n", i, s[i]);	/* test */
		if ((s[i] >= 48 && s[i] <= 57) && digit_found == 0)
		{/* first digit found */
			digit_found = 1;
			num = s[i] - '0';
			continue;
		}
		else if (!((s[i] >= 48 && s[i] <= 57)) && digit_found == 1)
			break;

		if ((s[i] >= 48 && s[i] <= 57))
		{/* include new digit */
			printf("_getnum(): new digit = '%c'\n", s[i]);	/* test */
			printf("_getnum(): old number = %d\n", num);	/* test */
			num *= 10;
			num += s[i] - '0';
			printf("_getnum(): updated number = %d\n", num);	/* test */
		}
		printf("_getnum(): digit_found = %d\n", digit_found);	/* test */
	}

	(*pos) = i;	/* update position */
	return (num);
}
