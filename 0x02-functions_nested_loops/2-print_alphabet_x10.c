#include "holberton.h"
/**
*print_alphabet - prints the alphabet 10 times
*Return: void
*/
void print_alphabet(void)
{
	int i = 0;
	char c = 'a';

	while (i < 10)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
			_putchar('\n');
			i++;
		}
}
