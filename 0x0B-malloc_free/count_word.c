/**
 * count_word - counts the number of words in a string
 * @str: string to compute
 * Description: words a white space delimited
 * Return: the number of words counted
 */
int count_word(char *str)
{
	int counts = 0, i = 0;
	short start = 0;

	while (1)
	{
		start = 0;
		while (isspace(str[i]) && str[i] != '\0')
			i++;
		while (!(isspace(str[i])) && str[i] != '\0')
			start = 1, i++;
		if (start == 1)
			counts++;
		if (str[i] == '\0')
		{
			break;
		}
		i++;
	}

	return (counts);
}
