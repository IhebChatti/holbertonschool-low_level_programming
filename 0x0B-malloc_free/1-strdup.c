#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
*_strdup - function that returns a pointer to newly allocated space in mem
*@str: pointer type char
*Return: pointer type char
*/
char *_strdup(char *str)
{
	int i = 0;
	char *ing;
	char *temp;

	if (str == NULL)
		return (NULL);
	while (str[i])
		i++;
	ing = malloc(i + 1);
	temp = ing;
	if (ing == NULL)
		return (NULL);
	while (*str)
		*temp++ = *str++;
	*temp = '\0';
	return (ing);
	free(ing);
}
