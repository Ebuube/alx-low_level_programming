#include "search_algos.h"

/**
 * binary_search - search for a value in a sorted array (ascending order)
 * @array: array to search in
 * @size: number of elements
 * @value: search key
 *
 * description: uses binary search algorithm; elements are unique
 * Return: index of item, on success; else -1
 */
int binary_search(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
	{
		return (-1);
	}

	return (b_search(array, 0, size - 1, value));
}

/**
 * b_search - search for a value in a sorted array (ascending order)
 * @array: array to search in
 * @l_idx: left index
 * @r_idx: right index
 * @value: search key
 *
 * description: uses binary search algorithm; elements are unique
 * Return: index of item, on success; else -1
 */
int b_search(int *array, unsigned int l_idx, unsigned int r_idx, int value)
{
	unsigned int half = 0, mid = 0, range = 0;

	range = r_idx - l_idx + 1;
	if (array == NULL || l_idx > r_idx)
	{
		return (-1);
	}
	if (l_idx == r_idx)
	{	/* 1 element array */
		printf("Searching array: ");
		print_array(array + l_idx, 1);
		printf("\n");
		if (array[l_idx] == value)
			return (l_idx);
		else
			return (-1);
	}
	half = (range) / 2;
	mid = (isodd(range)) ? l_idx + half : l_idx + half - 1;

	printf("Searching array: ");
	print_array(array + l_idx, range);
	printf("\n");
	if (array[mid] == value)
	{
		return (mid);
	}
	else if (array[mid] > value)
	{	/* lower half */
		return (b_search(array, l_idx, mid - 1, value));
	}
	else
	{	/* upper half */
		return (b_search(array, mid + 1, r_idx, value));
	}

	return (-1);
}


/**
 * print_array - print the array, comma-delimited
 * @array: array to print
 * @size: number of items
 *
 * Return: number of items printed, else -1
 */
int print_array(int *array, size_t size)
{
	size_t i = 0;

	if (array == NULL || size == 0)
	{
		return (-1);
	}

	printf("%d", *(array + i));
	i++;

	for (; i < size; i++)
		printf(", %d", *(array + i));

	return (i);
}

/**
 * isodd - is the number odd
 * @num: number to test
 *
 * Return: 1 if true, else 0
 */
int isodd(int num)
{
	return (num % 2);
}


