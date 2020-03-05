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
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
