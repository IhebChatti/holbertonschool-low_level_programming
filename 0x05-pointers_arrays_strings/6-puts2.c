#include "holberton.h"
/**
*puts2 - prints every character +2 from a string
*@str: pointer type char
*Return: void
*/
void puts2(char *str)
{
		while (*str)
	{
		_putchar (*str);
		str += 2;
	}
_putchar ('\n');
_putchar ('\0');
}
