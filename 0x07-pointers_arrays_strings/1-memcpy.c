#include "holberton.h"
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
