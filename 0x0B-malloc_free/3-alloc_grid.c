#include "main.h"
#include <stdlib.h>
#include "strlen.c"

/**
 * alloc_grid - allocates and initializes a 2D array of integers
 * @width: the width of the grid
 * @height: the height of the grid
 *
 * Description: each element is initialized to 0
 * Return: On sucess return pointer to grid, else NULL
 * if width of height is 0, return NULL
 */
int **alloc_grid(int width, int height)
{
	int i = 0, j = 0;
	int **tmp = 0;

	if (width <= 0 || height <= 0)
	{
		return (0);
	}

	/* allocate memory for the rows */
	tmp = (int **) malloc(height * sizeof(int *));
	if (tmp == 0)
	{
		return (0);
	}
	for (i = 0; i < height; i++)
	{
		tmp[i] = (int *) malloc(sizeof(int) * width);
		/* if malloc failure, free all previous mem and return null */
		if (tmp[i] == NULL)
		{
			free(tmp);
			for (j = 0; j <= i; j++)
				free(tmp[j]);
			return (NULL);
		}
	}

	/* initialize 2D array */
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			tmp[i][j] = 0;
	}

	return (tmp);
}
