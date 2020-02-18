#include "holberton.h"
/**
*puts2 - prints every character +2 from a string
*@str: pointer type char
*Return: void
*/
void puts2(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	{
		if (i % 2 == 0)	
			_putchar (str[i]);

	}
_putchar ('\n');
}
