#include "holberton.h"
/**
*cap_string - capitalize each word of a string
*@str: pointer type char
*Return: str
*/
char *cap_string(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i == 0)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] = str[i] - 32;
			continue;
		}
		if ((str[i] >= 32 && str[i] <= 47) || str[i] == 9)
		{
			i++;
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] = str[i] - 32;
				continue;
			}
		}
		else
		{
			if (str[i] <= 'A' && str[i] >= 'Z')
				str[i] = str[i] + 32;
		}
	}
	return (str);
}
