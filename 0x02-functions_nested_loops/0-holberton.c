#include "holberton.h"
#define putchar(c)
/**
*main - Entry point
*Return: 0
*/
int main(void)
{
	char *c = "Holberton";

	while (*c)
	{
		putchar (*c);
		c++;
	}
	putchar ('\n');
	return (0);
}
