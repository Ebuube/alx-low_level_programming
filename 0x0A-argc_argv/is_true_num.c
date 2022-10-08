#include <ctype.h>
/**
 * is_true_num - checks if a string contains only digits
 * @str: string to analyze
 * @pos: postion of the string to start from
 * Description: the sign of the number is put into consideration
 * Return: 1 if string contains only digits
 */
int is_true_num(char *str, int pos)
{
	int val = 0;

	if (str[pos] == '\0')
	{
		return (1);
	}
	if (pos == 0 && ((*str == '-') || (*str == '+')))
		pos++;
	val = (isdigit(str[pos])) ? pos++, is_true_num(str, pos) : 0;

	return (val);
}
