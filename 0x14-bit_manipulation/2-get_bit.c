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
	return ((n & (1 << index)) > 0);
}
