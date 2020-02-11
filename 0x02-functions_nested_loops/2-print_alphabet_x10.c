#include "holberton.h"
/**
*print_alphabet - prints the alphabet 10 times
*Return: void
*/
void print_alphabet(void)
{
	int i, j;

	while (i < 10)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
			_putchar('\n');
			i++;
		}
}
