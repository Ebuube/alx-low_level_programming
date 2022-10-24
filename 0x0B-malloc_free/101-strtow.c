#include "main.h"


/**
 * _isspace - checks if character is a whitespace character
 * @c: the character to test
 *
 * Return: 1 if it is whitespace else 0
 */
int _isspace(char c)
{
	int ans = 0;

	if (c == ' ' || c == '\n' || c == '\v' || c == '\b' || c == '\t')
		ans = 1;

	return (ans);
}


/**
 * count_word - counts the number of words in a string
 * @str: the string to compute
 *
 * Description: words are separated by spaces
 * Return: the number of words in str
 * else 0 if str == NULL or str == ""
 */
int count_word(const char *str)
{
	int word = 0, k = 0;

	if (str == 0 || str[0] == '\0')
	{
		return (0);
	}
	for (word = 0; str[k] != '\0';)
	{
		if ((_isspace((str[k])) == 0) && (str[k] != '\0'))
		{
			for (; (_isspace((str[k])) == 0)
				&& ((str[k]) != '\0');)
				k++;
			word++;
		}
		else
			k++;
	}

	return (word);
}

/**
 * strtow - a function that splits a string into words
 * @str: the string to convert
 *
 * Description: Each element of this array should contain a single word, null
 * terminated
 * The last element of the returned array should be NULL
 * Words are separated by spaces
 * Return: a pointer to an array of strings (words)
 * NULL if str == NULL or str == "" or if malloc fails
 */
char **strtow(char *str)
{
	char **arr = 0;
	int k = 0, m = 0, arr_step = 0, str_step = 0, len = 0;

	len = count_word(str);
	if (len == 0)
	{
		return (0);
	}
	arr = malloc((len + 1) * sizeof(char *));
	for (arr_step = 0; arr_step < len; arr_step++)
	{
		for (;str[str_step] != '\0';)
		{
			if (!_isspace(str[str_step]))
			{
				for (k = 0; !_isspace(str[str_step])
					&& str[str_step] != '\0'; k++)
					str_step++;
				arr[arr_step] = malloc((k + 1) * sizeof(char));
				str_step = str_step - k;
				for (m = 0; m < k; m++)
				{
					arr[arr_step][m] = str[str_step];
					str_step++;
				}
				arr[arr_step][m] = '\0';
				break;
			}
			else
				str_step++;
		}
	}
	arr[arr_step] = 0;	/* end of string */

	return (arr);
}
