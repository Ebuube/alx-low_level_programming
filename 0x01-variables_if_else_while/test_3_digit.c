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
	int printed[100], x, a, y, z, limit = 0;
	bool match;

	for (x = 0; x <  10; x++)
	{
		for (y = 0; y < 10; y++)
		{
			for (z = 0; z < 10; z++)
			{
				if (x == y || x == z || y == z)
					continue;
				for (a = 0; a <= limit; a++)
				{
					if (100 * x + 10 * y + z == printed[a]
						|| 100 * x + 10 * z + y == printed[a]
						|| 100 * y + 10 * x + z == printed[a]
						|| 100 * y + 10 * z + x == printed[a]
						|| 100 * z + 10 * x + y == printed[a]
						|| 100 * z + 10 * y + x == printed[a])
					{
						match = true;
						break;
					}
				}
				if (match == false)
				{
					putchar(x + '0');
					putchar(y + '0');
					putchar(z + '0');
					if (!((x == 7) && (y == 8) && (z == 9)))
					{
						putchar(',');
						putchar(' ');
					}
					limit++;
					printed[limit] = 100 * x + 10 * y + z;
				}
				match = false;

			}
		}
	}
	putchar('\n');
	return (0);
}
