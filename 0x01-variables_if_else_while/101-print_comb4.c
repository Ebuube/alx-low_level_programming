#include <stdio.h>

/**
 * main - A program to display the combination of three digits to form a number
 *
 * Description: This solution is based on these concepts
 * i. the digits in any combination should not be the same
 * ii. the smallest of all the combinations will be reached first
 *
 * Return: Return 0 if successful.
 */
int main(void)
{
	int a, b, c;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			for (c = 0; c <= 9; c++)
			{
				if (a < b && b < c)
				{
					putchar(a + '0');
					putchar(b + '0');
					putchar(c + '0');
					if (a != 7)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
