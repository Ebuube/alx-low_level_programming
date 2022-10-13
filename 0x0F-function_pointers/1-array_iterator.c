#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - executes function given as a parameter on each element of
 * an array
 * @array: the array contain the values
 * @size: the number of elements in the array
 * @action: the function to execute on the array
 *
 * Description: if null is passed to the function as array or function, nothing
 * will be executed
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array != 0 && action != 0)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
