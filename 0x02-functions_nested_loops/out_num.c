int out_num(int);

/**
 * out_num - displays any number less than 1000 using _putchar()
 * @n: number to print
 * Return: 0 if successful
 * 1 if argument is greater than 999
 */
int out_num(int n)
{
	int d, t = 123;

	if (n >= 1000)
		return (1);
	d = (n > 99) && (n < 1000) ?
		_putchar((n / 100) + '0'), (n = n % 100), t
	       : 0;
	if (d == t && n < 10)
	{
		_putchar('0');
		_putchar(n + '0');
		return (0);
	}
	d = (n > 9) && (n < 100) ?
		_putchar((n / 10) + '0'),
		_putchar(n % 10 + '0')
		: _putchar((d - d) + n + '0');
	return (0);
}
