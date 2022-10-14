#include "3-calc.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - entry of the program
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0 on sucess
 */
int main(int argc, char *argv[])
{
	char *op = argv[2];
	int a = atoi(argv[1]), b = atoi(argv[3]);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (!(strcmp("+", op) || strcmp("-", op)
		|| strcmp("*", op) || strcmp("/", op)
		|| strcmp("%", op)))
	{
		printf("Error\n");
		exit(99);
	}
	if ((strcmp("/", op) == 0 || strcmp("%", op) == 0) && (b == 0))
	{
		printf("Error\n");
		exit(100);
	}

	/**
	 * select the right function and pass the arguments to it
	 * and print the result
	 */
	printf("%d\n", (get_op_func(op))(a, b));

	return (0);
}
