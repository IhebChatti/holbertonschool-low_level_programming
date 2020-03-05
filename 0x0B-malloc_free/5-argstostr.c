#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
*argstostr - concatenates all the arguments of the prog
*@ac: int
*@av: pointer type char
*Return: pointer type char
*/
char *argstostr(int ac, char **av)
{
	int i, j, size = 0, final = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			size++;
		}
		size++;
	}
	size++;
	str = malloc(size);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			str[final] = av[i][j];
			final++;
		}
		str[final] = '\n';
		final++;
	}
	str[final] = '\0';
	return (str);
	free(str);
}
