#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints the minimum number of coins required to make change
 * for given amount of money in cents
 * @argc: argument count
 * @argv: argument vecotr, array of arguments
 * Return: 0 on Success, 1 on failure
 */
int main(int argc, char **argv)
{
	int val = 0, i = 0, sum = 0;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	val = atoi(argv[1]);
	if (val < 0)
	{
		printf("0\n");
		return (0);
	}
	for (i = 0; i < 5 && val >= 0; i++)
	{
		while (val >= coins[i])
		{
			sum++;
			val -= coins[i];
		}
	}
	printf("%d\n", sum);
	return (0);
}
