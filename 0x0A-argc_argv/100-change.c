#include <stdio.h>
#include <stdlib.h>
/**
*main - Entry point
*@argc: counter
*@argv: vector
*Return: 0
*/
int main(int argc, char *argv[])
{
	int money, i, res, x;
	int coins[5] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (0);
	}
	money = atoi(argv[1]);
	if (money <= 0)
	{
		printf("0\n");
		return (0);
	}
	if (money > 0)
	{
		for (i = 0; i < 5; i++)
			if (money >= coins[i])
			{
				x = money % coins[i];
				res = (money / coins[i]) + 1;
				money = x;
			}
	}
	printf("%d\n", res);
	return (0);
}
