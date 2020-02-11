#include "holberton.h"
/**
*times_table - displays the times table of n int
*@n: the number that will get it's times table
*Return: void
*/
void print_times_table(int n)
{
	int i, j, mul;

	if ((n <= 0) || (n <= 15))
	{
	for (i = 0; i <= 9; i++)
	{
		_putchar ('0');
		for (j = n; j <= 9; j++)
		{
			_putchar (',');
			_putchar (' ');
			mul	= i * n;
		if (mul <= 9)
		{
			_putchar (' ');
			_putchar (mul + '0');
		}
		else
		{
			_putchar ((mul / 10) + '0');
			_putchar ((mul % 10) + '0');
		}
		}
		_putchar ('\n');
	}
	}
}
