#include "holberton.h"

/**
 *binary_to_uint - convert binary string to an unsigned int
 *@b: the binary string
 *
 *Return: converted number on succes, 0 on failure
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int res = 0;
	int i;

	if (b == NULL)
		return (0);
	for (i = 0; b[i] == '0' || b[i] == '1'; i++)
	{
		res <<= 1;
		res += b[i] - '0';
	}
	return (res);
}
