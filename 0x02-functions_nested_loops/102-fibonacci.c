#include <stdio.h>
/*
*main - Entry point
*Return: 0
*/
int main(void)
{
	int i, next, x = 0, y = 1;

	for (i = 0; i < 50; i++)
	{
		printf("%d, ", x);
		next = x + y;
		x = y;
		y = next;
	}
	return (0);
}
