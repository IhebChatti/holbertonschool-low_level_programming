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
	int lOnw, lN;
	struct dog *newdog;

	newdog = malloc(sizeof(struct dog));
	while ((*newdog).name)
		lN++;
	while ((*newdog).owner)
		lOnw++;
	if (newdog == NULL)
		return (NULL);
	(*newdog).name = malloc(lN);
	if ((*newdog).name == NULL)
		free((*newdog).name);
	(*newdog).owner = malloc(lOnw);
	if ((*newdog).owner == NULL)
		free((*newdog).owner);
	(*newdog).name = name;
	(*newdog).age = age;
	(*newdog).owner = owner;
	return (newdog);
}
