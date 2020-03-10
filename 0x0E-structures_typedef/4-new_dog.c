#include "dog.h"
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
/**
*new_dog - creates a new dog
*@name: pointer type char
*@age: float
*@owner: pointer type char
*Return: pointer type dog_t
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog;
	char *nameCp;
	char *ownerCp;
	int lN, lOwn;

	newdog = malloc(sizeof(struct dog));
	if (newdog == NULL)
	{
		free(newdog);
		return (NULL);
	}
	for (lN = 0; name[lN]; lN++)
		;
	for (lOwn = 0; owner[lOwn]; lOwn++)
		;
	nameCp = _strdup(name);
	ownerCp = _strdup(owner);
	nameCp = malloc(sizeof(lN));
	ownerCp = malloc(sizeof(lOwn));
	if (nameCp == NULL || ownerCp == NULL)
	{
		free(newdog);
		free((*newdog).name);
		free((*newdog).owner);
		return (NULL);
	}
	(*newdog).name = nameCp;
	(*newdog).age = age;
	(*newdog).owner = ownerCp;
	return (newdog);
}
