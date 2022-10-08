#include <stdio.h>
#define UNUSED __attribute__((unused))

/**
 * main - Entry of the program
 * @argc: the argument count
 * @argv: the argument vector
 * Description: Prints the number of arguments passed to this program beside
 * the program name
 * Return: 0 if successful
 */
int main(int argc, UNUSED char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
