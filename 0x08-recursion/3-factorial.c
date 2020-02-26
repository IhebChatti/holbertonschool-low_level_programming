#include "holberton.h"
/**
*factorial - return the factorial of a number
*@n: int
*Return: int;
*/
int factorial(int n)
{
	if (n == 1)
		return (1);
	else if (n < 1)
		return (-1);
	else
		return (n * factorial(n - 1));
}
