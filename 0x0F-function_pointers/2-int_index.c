#include "function_pointers.h"

/**
 * int_index - a function that uses another function to search for an integer
 * @array: the array to be searched
 * @size: the number of elements int array
 * @cmp: the function to be used for comparison
 *
 * Description: used to search and compare for a value
 * Return: the index of the first element for which the cmp function does
 * not return 0
 * if no element matches, -1 is returned.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}

	return (-1);
}
