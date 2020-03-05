#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
*malloc_checked - a function to allocate memory
*@b: unsigned int
*Return: void pointer
*/
void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b * sizeof(unsigned int));
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
