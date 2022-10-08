#include <stdio.h>
#include <stdlib.h>
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

/**
 * main - adds positive numbers
 * @argc: argument count
 * @argv: argument vector, an array of positive numbers
 * Description: if one of the number contains symbols that are not digits,
 * print "Error" followed by a new line and return 1
 * Return: 0 on success else 1
 */
int main(int argc, char *argv[])
{
	int sum = 0, i = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		if (!(is_true_num(argv[i], 0)))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
