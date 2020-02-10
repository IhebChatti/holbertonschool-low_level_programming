#include "holberton.h"
/**
*main - Entry point
*Return: 0
*/
int main(void)
{
	char *c = "Holberton";
	while (*c)
	{
		putchar (*c++);
	}
	putchar ('\n');
	return (0);
}