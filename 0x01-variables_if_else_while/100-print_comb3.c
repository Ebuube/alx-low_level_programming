#include <stdio.h>
#include <stdbool.h>

/**
 * main - a  program that prints all possible different
 * combinations of two digits.
 *
 * Return: Returns 0 if successful
 */
int main(void)
{
	int printed[100];
	int x;
	int a;
	int y;
	int limit = 0;
	bool match;

	for (x = 0; x <  10; x++)
	{
		for (y = 0; y < 10; y++)
		{
			if (x == y)
				continue;

			for (a = 0; a <= limit; a++)
			{
				if (10 * x + y == printed[a]
					|| 10 * y + x == printed[a])
					match = 1;
			}
			if (match == false)
			{
				putchar(x + '0');
				putchar(y + '0');
				if (!((x == 8) && (y == 9)))
				{
					putchar(',');
					putchar(' ');
				}
				limit++;
				printed[limit] = 10 * x + y;
			}
			match = false;

		}
	}
	putchar('\n');
	return (0);
}
