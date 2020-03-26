#include "holberton.h"

/**
 *clear_bit - set the value of a bit to 0 at given index
 *@n: the number to be modified
 *@index: the index of the bit to be modified
 *
 *Return: 1 on succes, -1 on failure
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index > sizeof(unsigned long int) * 8)
		return (-1);
	mask = ~(1 << index);
	*n &= mask;
	return (1);
}
