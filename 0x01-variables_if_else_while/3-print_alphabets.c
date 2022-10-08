#include <stdio.h>

/**
 * main - a program that prints the alphabet in lowercase,
 * and then in uppercase, followed by a new line.
 *
 * Return: Returns 0 if succesful
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	for (letter = 'A'; letter <= 'Z'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}
