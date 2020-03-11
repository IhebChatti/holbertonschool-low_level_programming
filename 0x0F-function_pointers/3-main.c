#include "cal.h"
#include <stdlib.h>
#include <stdio.h>
/**
*main - Entry point
*@argc: int number of arguments passed
*@argv: Vector
*Return: 0 on success, 99 if NULL, 98,
*99 if arguments != 4, 100 if div or mod 0
*/
int main(int argc, char *argv[])
{
	int num1, num2, res;
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	if (get_op_func(argv[2]) == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	res = (get_op_func(argv[2])(num1, num2));
	printf("%d\n", res);
	return (0);
}
