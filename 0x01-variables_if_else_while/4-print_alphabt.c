#include <stdio.h>

/**
 * main - a program that prints the alphabet in lowecase,
 * followed by a new line.
 *
 * Return: Returns 0 if successful.
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'e' && letter != 'q')
			putchar(letter);
	}
	putchar('\n');

	return (0);
}
