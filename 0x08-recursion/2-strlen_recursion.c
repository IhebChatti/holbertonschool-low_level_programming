#include "holberton.h"
/**
*_strlen_recursion - function that returns count of string
*@s: pointer type char
*Return: int
*/
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
