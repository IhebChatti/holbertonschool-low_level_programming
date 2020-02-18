#include "holberton.h"
/**
*puts_half - prints half a string
*@str: pointer type char
*Return: void
*/
void puts_half(char *str)
{
	int i = 0, j, half;

	while (*str++)
		i++;
	half = i / 2;
	for (j = half; j <= '\0'; j++)
	{
		if (i % 2 == 0)
		_putchar (str[j]);
	}
_putchar ('\n');
}
