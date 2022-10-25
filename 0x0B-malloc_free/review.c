#include "main.h"
#include <stdio.h>	/* test */

/**
 * plan: go through the string
 * If a non-space character is met, start counting until the next space-character
 * Allocate space using the counted value.
 * Go back in the string for the counted value number of times
 * Fill the allocated space until the next space-character
 * else continue moving if space is encountered
 * Stop if end of the string is reached
 */

/**
 * _isspace - checks if character is a whitespace character
 * @c: the character to test
 *
 * Return: 1 if it is whitespace else 0
 */
int _isspace(char c)
{
	int ans = 0;

	printf("_isspace:\tEntry\n");	/* test */
	printf("_isspace:\tc == %c\n", c);	/* test */
	if (c == ' ' || c == '\n' || c == '\v' || c == '\b' || c == '\t')
		ans = 1;

	printf("-isspace:\tans == %d\n", ans);	/* test */
	printf("_isspace:\tExit\n");	/* test */
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

	printf("count_word:\tEntry to function\n");	/* test */
	if (str == 0 || str[0] == '\0')
	{
		return (0);
	}
	for (word = 0; str[k] != '\0';)
	{
		printf("count_word:\tfirst for loop\n");	/* test */
		if ((_isspace((str[k])) == 0) && (str[k] != '\0'))
		{
			for (; (_isspace((str[k])) == 0) && ((str[k]) != '\0');)
			{
				printf("count_word:\tsecond for loop\n");	/* test */
				printf("count_word:\tstr[%d] == %c\n", k, str[k]);	/* test */
				k++;
			}
			word++;
			printf("count_word:\tword == %d\n", word);	/* test */
		}
		else
			k++;
	}

	printf("count_word:\tExit from function\n");	/* test */
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

	printf("strtow:\tEntry to function\n");	/* test */
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

	printf("strtow:\tExit from function\n");	/* test */
	return (arr);
}
