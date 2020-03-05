#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
*_calloc - allocates mem for an array
*@nmemb: unsigned int
*@size: unsigned int
*Return: pointer
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arraymem;

	if (nmemb == 0 || size == 0)
		return (NULL);
	arraymem = malloc(nmemb * size);
	if (arraymem == NULL)
		return (NULL);
	return (arraymem);
}
