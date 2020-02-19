#include "holberton.h"
/**
 *_atoi - function to convert array to integer
 *@s: pointer type char
 *Return: converted int
 */
int _atoi(char *s)
{
	unsigned int result = 0;
	int sign = 1;
	int i = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
		{
			sign *= -1;
		}
		else if (s[i] >= '0' && s[i] <= '9')
		{
			result = result * 10 + (s[i] - '0');
			if (!(s[i + 1] >= '0' && s[i + 1] <= '9'))
				break;
		}
	}
	return (sign * result);
}
