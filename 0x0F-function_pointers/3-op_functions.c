#include "cal.h"
#include <stdlib.h>
#include <stdio.h>
/**
*op_add - add two integers
*@a: int
*@b: int
*Return: int
*/
int op_add(int a, int b)
{
	return (a + b);
}
/**
*op_sub - returns the diffrence between a & b
*@a: int
*@b: int
*Return: int
*/
int op_sub(int a, int b)
{
	return (a - b);
}
/**
*op_mul - multiply two integers
*@a: int
*@b: int
*Return: int
*/
int op_mul(int a, int b)
{
	return (a * b);
}
/**
*op_div - returns the product two integers
*@a: int
*@b: int
*Return: int
*/
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
*op_mod - returns remainder of the division of a & b
*@a: int
*@b: int
*Return: int
*/
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
