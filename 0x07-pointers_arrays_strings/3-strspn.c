#include "holberton.h"
/**
*_strspn - function get length of prefix substring
*@s: pointer type char (segment)
*@accept: pointer type char
*Return: count
*/
unsigned int _strspn(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (accept[j] == s[i])
				break;
		}
		if (!(accept[j]))
			break;
	}
	return (i);
}
