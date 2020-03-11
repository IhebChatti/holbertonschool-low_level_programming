#include "function_pointers.h"
#include <stdio.h>
/**
*int_index - searches for an integer
*@array: array of integers
*@size: size of array
*@cmp: pointer to function cmp
*Return: i if exists or -1 if doesn't exist
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size > 0 && array != NULL && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
