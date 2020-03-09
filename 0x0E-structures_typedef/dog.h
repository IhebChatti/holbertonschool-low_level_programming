#ifndef _DOG_H_
#define _DOG_H_
/**
*struct dog - define a DOG att
*@name: dog's name
*@age: dog's age
*@owner: dog's owner
*/
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;
typedef dog_t new dog(char *name, float age, char *owner);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
