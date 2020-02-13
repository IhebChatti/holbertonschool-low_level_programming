#include "holberton.h"
/**
*print_line - print a straight line
*@n: int
*Return: void
*/
void print_line(int n)
{
	int i, j = 0;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		_putchar('_');
	}
	_putchar ('\n');
	j++;
}
