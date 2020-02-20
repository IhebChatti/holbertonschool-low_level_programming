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
	
		if (str[i] == ' ' || str[i] == '.'
			|| str[i] == '\t' || str[i] == '\n'
			|| str[i] == ';' || str[i] == '('
			|| str[i] == ',' || str[i] == ')'
			|| str[i] == '{' || str[i] == '}'
			|| str[i] == '?' || str[i] == '"'
			|| str[i] == '!')
		{
		if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
			{
				str[i + 1] = str[i + 1] - 32;
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
