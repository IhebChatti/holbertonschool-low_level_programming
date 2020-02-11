#include <stdio.h>
/**
*main - Entry point
*Return: 0
*/
int main(void)
{
	int i, S = 23;

	for (i = 10; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			S = S + i;
		}
	}
	printf("%d\n", S);
	return (0);
}
