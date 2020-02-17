#include "holberton.h"
/**
*rev_string - reverse a string
*@s: pointer type char
*Return: void
*/
void rev_string(char *s)
{
	int i, j, k;
	char temp;

	for (i = 0; s[i]; i++)
		k = i;
	for (j = 0; j < k / 2; j++)
	{
		temp = s[j];
		s[j] = s[i - 1 - j];
		s[i - 1 - j] = temp;
	}
}
