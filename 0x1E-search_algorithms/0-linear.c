#include "search_algos.h"

/**
 * linear_search - get index of first occurrence of a value in an array
 * @array: array to search
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: On success, return the first index of value, else -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}

	return (-1);
}
