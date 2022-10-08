#include <stdio.h>
#include <unistd.h>
/**
 * main - a program tha prints all the numbers of base 16 in lowercase,
 * followed by a new line.
 *
 * Return: Returns 0 if successful.
 */
int main(void)
{
	char digit = '0';
	char letter = 'a';

	while (digit <= '9')
		putchar(digit++);
	for (letter = 'a'; letter <= 'f'; letter++)
		putchar(letter);
	putchar('\n');

	return (0);
}
