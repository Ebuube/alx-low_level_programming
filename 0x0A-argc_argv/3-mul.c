#include <stdio.h>
#include <stdlib.h>

#define UNUSED __attribute__((unused))

/**
 * main - Program to calculate the product of two numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if the number of paramters is complete else 1
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
