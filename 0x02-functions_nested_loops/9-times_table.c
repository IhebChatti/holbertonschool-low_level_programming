#include "holberton.h"
/**
*times_table - displays the times table from 0 to 9
*Return: void
*/
void times_table(void)
{
	int i, j, mul;

	for (i = 0; i <= 9; i++)
	{
		_putchar ('0');
		for (j = 1; j <= 9; j++)
		{
			_putchar (',');
			_putchar (' ');
			mul	= i * j;
		if (mul <= 9)
		{
			_putchar (mul + '0');
			_putchar (' ');
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
