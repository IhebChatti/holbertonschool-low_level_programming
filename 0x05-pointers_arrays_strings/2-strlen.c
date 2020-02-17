#include "holberton.h"
/**
*_strlen - calculate the lenght of a string
*@s: a pointer type char
*Return: lenght of a char
*/
int _strlen(char *s)
{
	int i = 0;

	while (*s++ != '\0')
		i++;
return (i);
}
