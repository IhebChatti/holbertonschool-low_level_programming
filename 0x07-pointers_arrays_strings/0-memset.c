#include "holberton.h"
/**
*_memset - function to fill memery with constant byte
*@s: pointer type char
*@b: constant byte char
*@n: size of memory int
*Return: pointer to memeory area s
*/
char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n > 0)
	{
		*p = b;
		p++;
		n--;
	}
	return (s);
}
