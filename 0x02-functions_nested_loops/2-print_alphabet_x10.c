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
		while (c <= 'z')
		{
			putchar(c);
			c++;
		}
		putchar('\n');
		i++;
	}
}
