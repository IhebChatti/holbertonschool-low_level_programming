#include "holberton.h"
/**
*print_alphabet - print the alphabet in lowercase
*Return: 0
*/
int print_alphabet(char c)
{
	c ='a';
	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}