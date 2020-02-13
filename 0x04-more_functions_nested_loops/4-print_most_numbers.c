#include "holberton.h"
/**
*print_most_numbers - print 1 digit numbers except 2 and 4
*Return: void
*/
void print_most_numbers(void)
{
	int i;

	while (i <= 9)
	{
		if (i == 2)
			i++;
		else if (i == 4)
			i++;
		else
		{
			_putchar (i + '0');
			i++;
		}
	}
	_putchar ('\n');
}
