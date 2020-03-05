#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
*string_nconcat - concatinates 2 strings
*@s1: string 1
*@s2: string 2
*@n: unsigned int
*Return: string
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i, l1 = 0, l2 = 0;

	if (s1 == '\0')
		s1 = "";
	if (s2 == '\0')
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		l1++;
	for (i = 0; s2[i] != '\0'; i++)
		l2++;
	str = malloc(l1 + n + 1);
	if (str == NULL)
		return (NULL);
	if (n >= l2)
		n = l2;
	for (i = 0; s1[i] != '\0'; i++)
		str[i] = s1[i];
	for (i = 0; i < n; i++)
		str[l1 + i] = s2[i];
	str[l1 + n] = '\0';
	return (str);
	free(str);
}
