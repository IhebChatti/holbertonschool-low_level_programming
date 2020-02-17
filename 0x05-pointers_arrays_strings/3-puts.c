#include "holberton.h"
/**
*_puts - a function that prints a string
*@str: a pointer type char
*Return: Void
*/
void _puts(char *str)
{
	while (*str)
	{
		_putchar (*str);
		str++;
	}
_putchar ('\n');
}
