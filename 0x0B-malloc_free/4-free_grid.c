#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
*free_grid - free the grid
*@grid: pointer type int
*@height: int
*Return: void
*/
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
		free(grid);
}
