#include "main.h"

/**
 * print_alphabet_x10 -  prints the alphabet 10 times
 *
 * Description: Prints the alphabet in lowercase, followed by a new line.
 * Return: void
 */
void print_alphabet_x10(void)
{
	char letter, a;

	for (a = 0; a < 10; a++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);
		_putchar('\n');
	}
}
