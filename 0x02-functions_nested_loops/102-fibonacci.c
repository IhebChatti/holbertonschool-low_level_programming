#include <stdio.h>
/*
*main - Entry point
*Return: 0
*/
int main(void)
{
	int i;
	long x = 1, y = 2;

	printf("%ld, %ld, ", x, y);
	for (i = x + y; i <= 50; i++)
	{
		x = x + y;
		y = x - y;
		printf("%ld", x);
		if ( i != 50)
		{
			printf(", ");
		}	
	}
	printf("\n");
	return (0);

}
