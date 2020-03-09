#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
*print_dog - print a struct dog
*@d: pointer type struct dog
*Return: Void
*/
void print_dog(struct dog *d)
{
	if (d == NULL)
		{}
	if ((*d).name == NULL)
		(*d).name = "(nil)";
	if ((*d).owner == NULL)
		(*d).owner = "(nil)";
	printf("Name: %s\n", (*d).name);
	printf("Age: %f\n", (*d).age);
	printf("Owneer: %s\n", (*d).owner);
}
