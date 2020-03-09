#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
*new_dog - creates a new dog
*@name: pointer type char
*@age: float
*@owner: pointer type char
*Return: pointer type dog_t
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	int lOnw, lN, i = 0;
	struct dog *newdog;

	newdog = malloc(sizeof(struct dog));
	while (name[lN])
		lN++;
	while (owner[lOnw])
		lOnw++;
	if (newdog == NULL)
		return (NULL);
	(*newdog).name = malloc(lN + 1);
	if ((*newdog).name == NULL)
	{
		free((newdog));
		return (NULL);
	}
	(*newdog).owner = malloc(lOnw + 1);
	if ((*newdog).owner == NULL)
	{
		free(newdog);
		free((*newdog).name);
		return (NULL);
	}
	while (i <= lN)
	{
		(*newdog).name[i] = name[i];
		i++;
	}
	(*newdog).age = age;
	i = 0;
	while (i <= lOnw)
	{
		(*newdog).owner[i] = owner[i];
		i++;
	}
	return (newdog);
}
