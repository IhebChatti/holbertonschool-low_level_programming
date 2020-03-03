#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
*str_concat - function to concat two strings
*@s1: pointer type char
*@s2: pointer type char
*Return: pointer
*/
char *str_concat(char *s1, char *s2)
{
	char *str;
	int i = 0, j = 0;
	int l1 = 0, l2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i] != '\0')
	{
		l1++;
		i++;
	}
	while (s2[i] != '\0')
	{
		l2++;
		i++;
	}
	str = malloc(l1 + l2 + 1);
	if (str == NULL)
		return (NULL);
	while (i < l1)
	{
		str[i] = s1[i];
		i++;
	}
	while (i < (l1 + l2))
	{
		str[i] = s2[j];
		i++;
		j++;
	}
	*str = '\0';
	return (str);
	free(str);
}
