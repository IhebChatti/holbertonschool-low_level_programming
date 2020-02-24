#include <stdio.h>
#include "holberton.h"
/**
*_strstr - function that locates a substring in a string
*@haystack: string
*@needle: substring
*Return: string
*/
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *hay = haystack;
		char *need = needle;

		while (*haystack == *need)
		{
			haystack++;
			need++;
		}
		if (!*need)
			return (hay);
		haystack = hay + 1;
	}
	return (NULL);
}
