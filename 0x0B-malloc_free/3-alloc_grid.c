#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
*alloc_grid - allocate a 2d array of ints
*@width: width
*@height: height
*Return: pointer to 2d array
*/
int **alloc_grid(int width, int height)
{
	int **array;
	int i, j;

	array = malloc(height * sizeof(int *));
	if (width <= 0 || height <= 0)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		array[i] = malloc(width * sizeof(int));
		if (array[i] == NULL)
			{
				for (j = 0; j < i; j++)
				{
					free(array[j]);
					free(array);
					return (NULL);
				}
			}
			for (j = 0; j < width; j++)
				array[i][j] = 0;
	}
	return (array);
}
