#include <stdlib.h>

/**
 * alloc_grid_str - allocates enough memory for a 2D string
 * @str: string to use for memory allocation
 * Return: pointer to reserved space
 */
char **alloc_grid_str(char *str)
{
	char **arr_word = NULL;
	int word = 0, word_len = 0, i = 0, j = 0;

	while (1)
	{
		while (isspace(str[i]) && str[i] != '\0')
			i++;
		while (!(isspace(str[i])) && str[i] != '\0')
			i++;
		word++;
		if (str[i] == '\0')
		{
			break;
		}
		i++;
	}

	arr_word = (char **) malloc(sizeof(char *) * (word + 1));
	if (arr_word == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < word; i++)
	{
		j = 0;
		while (isspace(str[j]) && str[j] != '\0')
			j++;
		while (!(isspace(str[j])) && (str[j] != '\0'))
			word_len++, j++;
		arr_word[i] = (char *) malloc(sizeof(char) * (word_len + 1));
		if (arr_word[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(arr_word[j]);
			return (NULL);
		}
	}
	return (arr_word);
}
