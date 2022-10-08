#include "main.h"
#include "my_translate.c"
/**
 * leet - encodes a string
 * @str: the string to encode
 * Description: a or A is converted to 4
 * e or E is converted to 3
 * o or O is converted to 0
 * t or T is converted to 7
 * l or L is converted to 1
 * Return: the translated string
 */
char *leet(char *str)
{
	int step = 0;

	for (step = 0; str[step] != '\0'; step++)
	{
		if ((str[step] == 'a' || str[step] == 'A')
			|| (str[step] == 'e' || str[step] == 'E')
			|| (str[step] == 'o' || str[step] == 'O')
			|| (str[step] == 't' || str[step] == 'T')
			|| (str[step] == 'l' || str[step] == 'L'))
			str[step] = translate(str[step]);
	}
	return (str);
}
