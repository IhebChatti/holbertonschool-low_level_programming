#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
*init_dog - function to init variable type struct dog
*@d: struct pointer
*@name: pointer type char
*@age: float
*@owner: pointer type char
*Return: void
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
