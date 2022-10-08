#include "main.h"
#include "2-strlen.c"

/**
 * puts_half - prints the half of a string followed by a new line
 * @str: the string to print
 *
 * Description: The function should print the second half of the string
 * If the number of characters is odd, the function
 * should print the last n characters of the string
 * where n = (length_of_the_string - 1) / 2
 * Return: void
 */
void puts_half(char *str)
{
	int len = _strlen(str), step, start;
	char *dummy = str;

	if (len == 0)
		goto end;
	else if (len % 2 == 1)
		start = 1 + (len - 1) / 2;
	else
		start = len / 2;
	for (step = 0; step < start; step++)
		dummy++;
	while ((*dummy) != '\0')
	{
		_putchar(*dummy);
		dummy++;
	}
end:	_putchar('\n');
}
