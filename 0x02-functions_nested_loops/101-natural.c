#include <stdio.h>
/**
*main - Entry point
*Return: 0
*/
int main(void)
{
	int i, S = 23;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 5 == 0) || (i % 3 == 0))
		{
			S = S + 1;
		}
	}
	printf("%d\n", S);
	return (0);
}
