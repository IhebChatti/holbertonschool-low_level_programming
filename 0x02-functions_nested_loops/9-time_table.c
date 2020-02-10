#include "holberton.h"
/**
*times_table - displays the times table from 0 to 9
*Return: 0
*/
void times_table(void)
{
	int i, j;
	int mul;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
		mul	= i * j;
		_putchar (mul + '0');
		if (i <= 8 && j <= 8)
		{
			_putchar (',');
			_putchar (' ');
		}
		}
	_putchar ('\n');
	}
return (0);
}
