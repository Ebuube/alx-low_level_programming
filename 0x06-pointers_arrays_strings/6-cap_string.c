#include "main.h"
#include <ctype.h>
/**
 * cap_string - capitalizes the first letter of all words of a string
 * @str: the string to work on
 * Return: Always 0 if successful
 */
char *cap_string(char *str)
{
	int step = 0, count = 0;
	char sep[] = {' ', '\t', '\n', ',', '.', ';', '!', '?', '"', '(', ')',
		'{', '}'};
	const int cap = 'A' - 'a', MAX = sizeof(sep) / sizeof(char);

	if (islower(str[step]))
		str[step++] += cap;
	for (; str[step] != '\0'; step++)
	{
		count = 0;
		for (; (str[step] != sep[count]) && (count < MAX) ; count++)
			;
		if (count < MAX)
		{
			for (; !isalpha(str[step]) && (str[step]) != '\0';
					       step++)
				;
			if (islower(str[step]) && !(isdigit(str[step - 1])))
				str[step] += cap;
		}
	}
	return (str);
}
