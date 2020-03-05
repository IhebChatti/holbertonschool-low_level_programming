#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
*array_range - creates an array of integers
*@min: int
*@max: int
*Return: array pointer type int
*/
int *array_range(int min, int max)
{
	int *arr;
	int i, size;

	size = max - min;
	if (min > max)
		return (NULL);
	arr = malloc(size * sizeof(int));
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < size; i++, min++)
	{
		arr[i] = min;
	}
	return (arr);
}
