#include "holberton.h"
/**
*leet - leet translator
*@str: pointer type char
*Return: str
*/
char *leet(char *str)
{
	int i, j;
	char l[] = "aAeEoOtTlL", n[] = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; l[j] != '\0'; j++)
		{
			if (str[i] == l[j])
				str[i] = n[j];
		}
	}
	return (str);
}
