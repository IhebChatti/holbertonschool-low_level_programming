#include "holberton.h"

/**
 *get_bit - function to get a bit from a given index
 *@n: number to get bit from
 *@index: position
 *
 *Return: value of bit at index on success, -1 on failure
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int i;

	i = n & (1 << index);
	if (index > sizeof(unsigned long int) * 8)
		return (-1);
	if (i == 0)
		return (0);
	else
		return (1);
}
