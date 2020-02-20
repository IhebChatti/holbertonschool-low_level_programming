#include "holberton.h"
/**
*rot13 - function that encodes a string using rot13
*@str: pointer type char
*Return: str
*/
char *rot13(char *str)
{
	int i, j;
	char l1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char l2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; l1[j] != '\0'; j++)
		{
			if (str[i] == l1[j])
				str[i] = l2[j];
		}
	}
	return (str);
}
