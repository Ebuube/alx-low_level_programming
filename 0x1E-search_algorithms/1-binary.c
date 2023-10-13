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
	unsigned int i = 0, new_size = 0;
	int left = 0;

	if (array == NULL || size == 0)
	{
		return (-1);
	}

	/* i = roundup((float)(size / 2)); */
	/* new_size = size / 2; */
	/* i = (new_size > 1) ? new_size - 1 : 0; */
	new_size = size / 2;
	if (isodd(size))
	{
		i = new_size;
	}
	else
	{
		i = new_size - 1;
	}

	printf("Searching in array: ");
	print_array(array, size);
	printf("\n");
	if (array[i] == value)
	{
		return (i);
	}

	printf("binary_search: i = %u\n", i);	/* test */
	if (array[i] > value)
		left = binary_search(array, i, value);
	else if (isodd(size))
		return (binary_search(array + new_size + 1, new_size, value));
	else
		return (binary_search(array + new_size, new_size, value));

	return (left);
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

	printf("print_array: size -> %lu\n", size);	/* test */
	printf("%d", *(array + i));
	i++;

	for (; i < size; i++)
		printf(", %d", *(array + i));

	return (i);
}

/**
 * roundup - round up a float to the nearest higher integer
 * @num: value
 *
 * Return: rounded value
 */
int roundup(float num)
{
	int i = 0;

	i = num;
	if (i < num)
	{
		return (i + 1);
	}

	return (i);
}
