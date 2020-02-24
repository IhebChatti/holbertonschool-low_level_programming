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
	int i = 0, j = 0;

	while (*haystack)
	{
		while (needle[j] && haystack[i] == needle[0])
		{
			if (haystack[i + j] == needle[j])
				j++;
			else
				break;
		}
		if (needle[j])
		{
			i++;
			j = 0;
		}
		else
			return (haystack + i);
	}
	return (0);
}
