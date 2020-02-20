#include "holberton.h"
/**
*_strncat - fucntion to concatenate two strings
*@dest: pointer type char
*@src: pointer type char
*@n: int
*Return: char
*/
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i + j + 1] = '\0';
	return (dest);
}
