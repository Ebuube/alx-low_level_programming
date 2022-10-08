#include "main.h"
#include <time.h>
/**
 * jack_bauer - print every minute of the day of Jack Bauer from 00:00 to 23:59
 * Returns: void
 */
void jack_bauer(void)
{
	int a, b;

	for (a = 0; a <= 23; a++)
	{
		for (b = 0; b <= 59; b++)
		{
			if (a <= 9)
			{
				_putchar('0');
				_putchar(a + '0');
			}
			else
			{
				_putchar((a - (a % 10)) / 10 + '0');
				_putchar((a % 10) + '0');
			}
			_putchar(':');
			if (b <= 9)
			{
				_putchar('0');
				_putchar(b + '0');
			}
			else
			{
				_putchar((b - (b % 10)) / 10 + '0');
				_putchar((b % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
