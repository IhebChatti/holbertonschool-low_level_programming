#include "holberton.h"
/**
*print_alphabet - prints the alphabet 10 times
*Return: void
*/
void print_alphabet(void)
{
	int i = 0, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
