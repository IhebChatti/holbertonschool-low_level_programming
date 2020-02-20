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
	char *local = dest;

	while (*dest)
		dest++;
	while (n--)
		if (!(*dest++ == *src++))
			return (local);
	*dest = '\0';
	return (local);
}
