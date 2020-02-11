#include <stdio.h>
#include "holberton.h"
/**
*print_to_98 - prints real numbers to 98
*@n: integer
*Return: void
*/
void print_to_98(int n)
{
	if (n > 98)
	{
		int i;

		for (i = n; i >= 98; i--)
		{
			printf("%d", i);
			if (i != 98)
				printf(", ");
		}
	} else if (n == 98)
	{
		printf("%d", n);
	} else
	{
		int i;

		for (i = n; i <= 98; i++)
		{
			printf("%d", i);
			if (i != 98)
				printf(", ");
		}
	}
printf("\n");
}
