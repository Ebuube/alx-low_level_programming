#include "main.h"
#include <stdlib.h>
#include <ctype.h>
#include "alloc_grid_str.c"
#include "count_word.c"

/**
 * strtow - splits a string into words
 * @str: the string to split
 * Description: Each element of the returned array conatins a single word,
 * null terminated and the last element of the returned array is NULL
 * Return: pointer to an array of words(also strings);
 * else returns NULL if str == NULL or str == ""
 * or if memory allocation fails
 */
char **strtow(char *str)
{
	int i = 0, j = 0, c = 0, word = 0;
	char **arr_word = 0;

	if (str == NULL || (*str) == '\0')
	{
		return (NULL);
	}
	word = count_word(str);
	if (word == 0)
	{
		return (0);
	}
	arr_word = alloc_grid_str(str);	/* allocate space */
	if (arr_word == NULL)
	{
		return (NULL);
	}
	arr_word[word] = '\0';	/* end of master array */
	c = 0;	/* copy string to words */
	for (i = 0; i < word; i++)
	{
		j = 0;
		while (isspace(str[c]) && str[c] != '\0')
			c++;
		while (!(isspace(str[c])) && str[c] != '\0')
		{
			arr_word[i][j] = str[c];
			j++, c++;
		}
		arr_word[i][j] = '\0';	/* end of each word */
	}

	return (arr_word);
}
