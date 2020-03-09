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
		printf("Name: (nil)");
	else if ((*d).age == 0)
		printf("Age: (nil)");
	else if ((*d).owner == NULL)
		printf("Owner: (nil)");
	else
	{
		printf("Name: %s\n", (*d).name);
		printf("Age: %f\n", (*d).age);
		printf("Owneer: %s\n", (*d).owner);
	}
}
