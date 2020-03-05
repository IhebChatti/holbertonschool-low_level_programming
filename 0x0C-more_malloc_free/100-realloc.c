#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
*_memcpy - function to copy memory area
*@dest: destination pointer type char
*@src: source pointer type char
*@n: unsigned int
*Return: dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *pDest = (char *)dest;
	char *pSrc = (char *)src;
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		pDest[i] = pSrc[i];
	}
	return (dest);
}
/**
*_realloc - reallocates a mem block using malloc && free
*@ptr: void pointer
*@old_size: unsigned int
*@new_size: unsigned int
*Return: void pointer
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;

	if (new_size == 0)
	{
		return (ptr);
	}
	else if (!ptr)
	{
		return (malloc(new_size));
	}
	else if (new_size <= old_size)
	{
		return (ptr);
	}
	else
	{
		new_ptr = malloc(new_size);
		if (new_ptr)
		{
			_memcpy(new_ptr, ptr, old_size);
			free(ptr);
		}
		return (new_ptr);
	}
}
