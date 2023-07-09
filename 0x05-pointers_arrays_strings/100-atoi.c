#include "main.h"

/* FUNCTION PROTOTYPES */

int _isdigit(char c);
int _isspace(char c);
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
	unsigned int num = 1;
	int sign = 1, i = 0;

	sign = _getsign(s, (unsigned int *)&i);
	num = _getnum(s, (unsigned int *)&i);

	return ((int) (num * sign));
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

	if (pos == 0)
	{
		return (0);
	}
	i = (*pos);

	for (i = 0; s != 0 && s[i] != '\0' && !_isdigit(s[i]); i++)
	{
		if (!(s[i] == 43 || s[i] == 45) && !_isdigit(s[i]) &&
			!_isspace(s[i]))
		{/* space found between signs */
			continue;
		}
		if (s[i] != 43 && s[i] != 45 && !_isdigit(s[i]))
		{/* check against characters except '+' '-' */
			if (sign_found == 1)
			{/* a character intercepted sign and digits */
				sign = 1;
			}
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

		if (_isdigit(s[i]))	/* digit */
			break;
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

	if (pos == 0)
	{
		return (0);
	}
	i = (*pos);

	for (; s != 0 && s[i] != '\0'; i++)
	{
		if (_isdigit(s[i]) && digit_found == 0)
		{/* first digit found */
			digit_found = 1;
			num = s[i] - '0';
			continue;
		}
		else if (!(_isdigit(s[i])) && digit_found == 1)
			break;

		if (_isdigit(s[i]))
		{/* include new digit */
			num *= 10;
			num += s[i] - '0';
		}
	}

	(*pos) = i;	/* update position */
	return (num);
}
