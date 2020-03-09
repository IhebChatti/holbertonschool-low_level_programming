#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
*free_dog - free memorty already allocated
*@d: pointer type dog_t
*Return: Void
*/
void free_dog(dog_t *d)
{
	if (d)
	{
		free((*d).name);
		free((*d).owner);
		free((*d).age);
		free(d);
	}
}
