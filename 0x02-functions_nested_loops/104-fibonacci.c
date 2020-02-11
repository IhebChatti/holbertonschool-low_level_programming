#include <stdio.h>
/*
*main - Entry point
*Return: 0
*/
int main(void)
{
	int i;
	unsigned long long int x = 1, y = 2;

	printf("%llu, %llu, ", x, y);
	for (i = x + y; i <= 98; i++)
	{
		y = y + x;
		x = y - x;
		printf("%llu", y);
		if (i != 98)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}
