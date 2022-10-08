#include "main.h"
#include "2-strlen.c"

/**
 * puts2 - prints every other character of a string, starting with
 * the first character
 * @str: string to print
 * Description: It is ended by a newline
 * Return: void
 */
void puts2(char *str)
{
	char *dummy = str;

	if (_strlen(dummy) == 0)
		goto end;
	while (1)
	{
		if ((*dummy) == '\0')
			break;
		_putchar(*dummy);
		dummy = dummy + 2;
		if ((*(dummy - 1)) == '\0')
			break;
	}

end: _putchar('\n');
}
