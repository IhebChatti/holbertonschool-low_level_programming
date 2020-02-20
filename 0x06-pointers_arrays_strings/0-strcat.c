#include "holberton.h"
/**
*_strcat - a function that concatinates two strings
*@dest: pointer type char for destination
*@src: pointer typ char for source
*Return: char
*/
char *_strcat(char *dest, char *src)
{
int i = 0, length = 0;

	while (dest[length] != '\0')
		length++;
	while (src[i] != '\0')
	{
		*(dest + length) = *(src + i);
		i++;
		length++;
	}
	dest[length + i] = '\0';
	return (dest);
}
