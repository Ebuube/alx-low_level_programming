#include <stdio.h>

/**
 * main - A program that prints the alphabet in lowercase,
 * followed by a new line.
 *
 * Return: Returns 0 when successful
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);
	putchar('\n');

	return (0);
}
