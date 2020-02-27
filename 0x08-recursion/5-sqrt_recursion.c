#include "holberton.h"
/**
*_sqrt_recursion - function that returns natural squar root of num
*@n: int
*@i: int
*Return: int
*/
int prime_sqrt(int n, int i);
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (-1);
	return (prime_sqrt(n, 1));
}
/**
*prime_sqrt - check if number prime square root or not
*@n: int
*@i: int
*Return: int
*/
int prime_sqrt(int n, int i)
{
	if ((i * i) == n)
		return (i);
	if ((i * i) > n)
		return (-1);
	else
		return (prime_sqrt(n, i + 1));
}
