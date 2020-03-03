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
	int i = 0, j = 0, size = 0, final = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);
	while (i < ac)
	{
		while (av[i][j])
		{
			size++;
			j++;
		}
		size++;
		i++;
	}
	size++;
	str = malloc(size);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
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
