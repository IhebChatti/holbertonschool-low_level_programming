#include "holberton.h"
/**
*_islower - checkes if character is lowercase
*Return: 0
*/
int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
		{
			putchar('1');
		}
	else
		{
			putchar('0');
		}
}
