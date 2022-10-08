#include <stdio.h>
#define UNUSED __attribute__((unused))

/**
 * main - Entry of main program
 * @argc: command line argument count
 * @argv: command line argument vector
 *
 * Description: prints the name of the calling program followed by a new line
 * Return: 0 Always
 */
int main(int UNUSED argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
