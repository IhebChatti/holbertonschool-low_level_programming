#include "holberton.h"
/**
*_strcat - a function that concatinates two strings
*@dest: pointer type char for destination
*@src: pointer typ char for source
*Return: char
*/
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	return (dest);
}
