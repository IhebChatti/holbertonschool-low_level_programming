#include "holberton.h"
/**
*_strcpy - copy a string
*@dest: pointer type char
*@src: pointer type char
*Return: char
*/
char *_strcpy(char *dest, char *src)
{
	char *res = dest;

	if ((dest != '\0') && (src != '\0'))
	{
		while (*src != '\0')
			*dest++ = *src++;
		*dest = '\0';
	}
	return (res);
}
