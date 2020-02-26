#include "holberton.h"
/**
*is_palindrome - check if strings is palindrome
*rev_recursion - reverse string
*@s: pointer type char
*@str: pointer type char
*Return: 1 or 0
*/
char *rev_recursion(char *str);
int is_palindrome(char *s)
{
	if (s == rev_recursion(s))
	{
		return (1);
	}
	else
		return (0);
}
/**
*rev_recursion - reverse string
*@str: pointer type char
*Return: string
*/
char *rev_recursion(char *str)
{
	if (*str != '\0')
	{
		rev_recursion(str + 1);
		return (str);
	}
	return (str);
}
