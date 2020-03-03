#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"
/**
*create_array - create an array of chars
*@size: unsigned int
*@c: char
*Return: pointer to char
*/
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);
	array = malloc(sizeof(char) * size);
	if (array == NULL)
		return (NULL);
	while (i < size)
	{
		array[i] = c;
		i++;
	}
	return (array);
	free(array);
}
