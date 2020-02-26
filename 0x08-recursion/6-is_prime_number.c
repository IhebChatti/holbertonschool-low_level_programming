#include "holberton.h"
/**
*is_prime_number - function to return if number is prime or not
*check_prime function to check if number is prime
*@n: int
*@i: int
*Return: int
*/
int check_prime(int n, int i);
int is_prime_number(int n)
{
	if (check_prime(n, 1) == 1)
		return (1);
	else
		return (0);
	return (0);
}
/**
*check_prime - check if number is prime or not
*@n: int
*@i: int
*Return: int
*/
int check_prime(int n, int i)
{
	i = 2;
	if (n <= 2)
		return ((n == 2) ? 1 : 0);
	if (n % i == 0)
		return (0);
	if (i * i > n)
		return (1);
	return (check_prime(n, i + 1));
}
