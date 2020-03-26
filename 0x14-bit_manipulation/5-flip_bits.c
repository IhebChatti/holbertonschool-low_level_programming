#include "holberton.h"

/**
 *count_bits - count set bits
 *@n: number to be counted
 *
 *Return: count
 */

unsigned long int count_bits(unsigned long int n)
{
	unsigned long int i = 0;

	while (n)
	{
		i += n & 1;
		n >>= 1;
	}
	return (i);
}

/**
 *flip_bits - function to return number of bits needed for flip
 *@n: number 1
 *@m: number 2
 *
 *Return: number of bits to be flipped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	return (count_bits(n ^ m));
}
