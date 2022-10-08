#include <stdio.h>

/**
 * main - This program displays the size of various types on the computer it is
 * compiled and run on.
 *
 * Description: The output should be exactly this
 * "
 * Size of a char: 1 byte(s)
 * Size of an int: 4 byte(s)
 * Size of a long int: 4 byte(s)
 * Size of a long long int: 8 byte(s)
 * Size of a float: 4 byte(s)
 * "
 * Warnings are allowed
 * This program shoud return 0
 * The package libc6-dev-i386 might have been installed on your Linux to test
 * the -m32 gcc option.
 * Return: Returns 0 as success value
 */
int main(void)
{
	printf("Size of a char: %lu byte(s)\n", sizeof(char));
	printf("Size of an int: %lu byte(s)\n", sizeof(int));
	printf("Size of a long int: %lu byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %lu bytes(s)\n", sizeof(long long int));
	printf("Size of a float: %lu byte(s)", sizeof(float));

	return (0);
}
