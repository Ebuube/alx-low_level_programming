#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of the calling program
 * @ac: argument count
 * @av: argument vector
 *
 * Description: Each argument is follwed by a newline character
 * Return: pointer to concatenated string, else NULL if ac == 0 or av == NULL
 * or if memory allocation fails
 */
char *argstostr(int ac, char **av)
{
	int i = 0, j = 0, len = 0;
	char *str = NULL, *p_str = NULL;

	if (ac <= 0 || av == NULL)
	{
		return (NULL);
	}
	while (i < ac)
	{
		j = 0;
		/* count length of string to allocate */
		while (av[i][j] != '\0')
			len++, j++;
		i++;
	}
	len += ac;	/* for the newline characters */
	str = (char *) malloc(sizeof(char) * (len + 1));
	p_str = str;
	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			(*p_str) = av[i][j];
			p_str++, j++;
		}
		(*p_str) = '\n';
		p_str++;
	}
	(*p_str) = '\0';	/* end of string */

	return (str);
}
