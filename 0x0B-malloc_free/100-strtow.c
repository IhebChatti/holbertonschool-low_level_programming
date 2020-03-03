#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
*strtow - function that split strings into words
*@str: pointer type char
*return: pointer type char
*/
char **strtow(char *str)
{
	int i, j = 0, count = 0, size;
	char **words;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (i = 0; str[i]; i++)
		size++;
	words = malloc(size);
	if (str == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
	{
		for (j = 0; str[j]; j++)
		{
			words[count][j] = str[i];
			count++;
		}
	}
	words[i] = '\0';
	return (words);
	free(words);
}
