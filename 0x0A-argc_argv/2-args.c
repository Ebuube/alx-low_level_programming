#include <stdio.h>

/**
 * main - Entry of the program
 * @argc: the argument count
 * @argv: the argument vector
 * Description: prints all arguments it receives
 * Return: 0 if successful
 */
int main(int argc, char *argv[])
{
	int i = 0;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
