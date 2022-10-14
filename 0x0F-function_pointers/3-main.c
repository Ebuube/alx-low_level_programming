#include "3-calc.h"

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
	int a = 0, b = 0;
	int (*func)(int, int) = NULL;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	func = get_op_func(argv[2]);

	if (!func)
	{
		printf("Error\n");
		exit(99);
	}

	if (((strcmp("/", op) == 0) || (strcmp("%", op) == 0))
			&& (b == 0))
	{
		printf("Error\n");
		exit(100);
	}

	/**
	 * select the right function and pass the arguments to it
	 * and print the result
	 */
	printf("%d\n", func(a, b));

	return (0);
}
