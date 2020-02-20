#include "holberton.h"
/**
*_strcmp - a function to compare 2 strings
*@s1: pointer type char
*@s2: pointer type char
*Return: int
*/
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	if (*s1 == *s2)
	{
		return (0);
	}
	else
		return (*s1 - *s2);
}
