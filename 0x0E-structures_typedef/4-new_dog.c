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
	struct dog *newdog = malloc(sizeof(dog_t));
	(*newdog).name = name;
	(*newdog).age = age;
	(*newdog).owner = owner;
	return (newdog);
}
