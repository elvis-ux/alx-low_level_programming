#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - Initializes a variable type dog
 * @d: pointer to struct dog type
 * @name: pointer to dog's name
 * @age: dog's age
 * @owner: pointer to dog's owner
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
