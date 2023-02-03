#include "hash_tables.h"

/**
 * key_index - calculates the index to store a value in the array of the
 * hash table
 *
 * @key: the string key to hash and index
 * @size: the size of the array of the hash table
 * Return: the result of the calculation
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = 0;

	index = hash_djb2(key);

	/* code placeholder to check agains NULL key and size == 0 */

	return (index % size);
}
