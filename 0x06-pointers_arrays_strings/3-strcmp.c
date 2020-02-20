#include "holberton.h"
/**
*_strcmp - a function to compare 2 strings
*@s1: pointer type char
*@s2: pointer type char
*Return: int
*/
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int x = 0;

	while (x == 0)
	{
		if (s1[i] > s2[i])
		{
			x = 15;
		}
		else if (s1[i] < s2[i])
		{
			x = -15;
		}
		if (s1[i] == '\0')
		{
			break;
		}
		i++;
	}
	return (x);
}