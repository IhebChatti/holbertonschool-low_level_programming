#include "holberton.h"
/**
 *binary_to_uint - convert binary string to an unsigned int
 *@b: the binary string
 *
 *Return: converted number on succes, 0 on failure
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int res = 0, i = 0;

	if (b == NULL)
		return (0);
	while (b[i])
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		res = res << 1;
		if (b[i] == '1')
			res = res ^ 1;
		i++;
	}
	return (res);
}
