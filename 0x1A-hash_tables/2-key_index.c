#include "hash_tables.h"

/**
 * key_index - calculates the index of a key
 * @key: the key to hash
 * @size: the size of the array of the hash table
 *
 * Return: the index at which the key/value pair should be stored in the array
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	if (key == NULL || strlen((char *)key) == 0)
	{
		fprintf(stderr, "key_index: Invalid key %p\n", (void *)key);
		if (key != NULL)
		{
			fprintf(stderr, "key_index: key string length = %ld\n",
				strlen((char *)key));
		}	
		exit(EXIT_FAILURE);
	}
	return (hash_djb2(key) % size);
}
