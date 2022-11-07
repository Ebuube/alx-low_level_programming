#include <stdio.h>
#include <stdlib.h>

#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0
 */
int main(int ac, char **av)
{
	ssize_t res;

	if (ac != 3)
	{
		dprintf(2, "Usage: %s filename\n", av[0]);
		exit(EXIT_FAILURE);
	}
	res = create_file(av[1], av[2]);
	printf("-> %li)\n", res);
	return (0);
}
