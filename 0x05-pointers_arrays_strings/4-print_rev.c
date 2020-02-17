#include "holberton.h"
/**
*print_rev - a function to print a string in reverse
*@s: an pointer type char
*Return: Void
*/
void print_rev(char *s)
{
	int i, j;

	for (i = 0; s[i]; i++)
		j = i;
	for (i = j; i >= 0; i--)
	_putchar (s[i]);
	_putchar ('\n');
}
