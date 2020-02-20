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
			if (str[0] >= 'a' && str[0] <= 'z')
				str[0] = str[0] - 32;
			continue;
		}
		if (str[i] == ' ' || str[i] == '.'
			|| str[i] == '\t' || str[i] == '\n'
			|| str[i] == ';' || str[i] == '('
			|| str[i] == ',' || str[i] == ')'
			|| str[i] == '{' || str[i] == '}'
			|| str[i] == '?' || str[i] == '"')
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
