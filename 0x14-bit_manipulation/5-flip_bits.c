#include "holberton.h"

/**
 *
 *
 *
 *
 *
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
 *flip_bit
 *
 *
 *
 *
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	return count_bits(n ^ m);
}