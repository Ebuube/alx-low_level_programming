#include "main.h"

/**
 * get_endianness - checks the endianness of a system
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	char *c = 0;
	int test = 0, endian = 0;

	if (sizeof(test) == 2)
		test = 0x1234;
	else if (sizeof(test) == 4)
		test = 0x12000034;

	c = (char *) (&test);

	if ((*c) == 0x12)
		endian = 0;
	else if ((*c) == 0x34)
		endian = 1;

	return (endian);
}
