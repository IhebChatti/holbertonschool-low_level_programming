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
	int money, res = 0;

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
	if (money >= 25)
	{
		res += money / 25;
		money = money % 25;
	}
	if (money >= 10)
	{
		res += money / 10;
		money = money % 10;
	}
		if (money >= 5)
	{
		res += money / 5;
		money = money % 5;
	}
		if (money >= 2)
	{
		res += money / 2;
		money = money % 2;
	}
		if (money >= 1)
	{
		res += money / 1;
		money = money % 1;
	}
	printf("%d\n", res);
	return (0);
}
