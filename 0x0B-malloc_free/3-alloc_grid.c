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
	int i;

	array = malloc(height * sizeof(int *));
	if (width <= 0 || height <= 0)
		return (NULL);
	if (array == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		array[i] = malloc(width * sizeof(int));
	}
	return (array);
}
