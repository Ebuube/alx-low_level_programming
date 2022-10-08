#include "main.h"

/**
 * main - a program to print exactly
 * _putchar, followed by a new line
 *
 * Return: Returns 0 if successful
 */
int main(void)
{
	int msg[] = {(int) '_', (int) 'p', (int) 'u', (int) 't', (int) 'c',
		(int) 'h', (int) 'a', (int) 'r', (int) '\n'};
	int len = sizeof(msg) / sizeof(int);
	int a;

	for (a = 0; a < len; a++)
	{
		_putchar(msg[a]);
	}
	return (0);
}
