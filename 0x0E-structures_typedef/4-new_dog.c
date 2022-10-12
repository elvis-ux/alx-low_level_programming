#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog instance
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: newdog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int k, new_name, new_owner;

	dog_t *new_dog = malloc(sizeof(dog_t));

	if (new_dog != NULL)
	{
		new_name = sizeof(name) + 1;
		new_owner = sizeof(owner) + 1;
		new_dog->name = malloc(new_name);
	}
	else
	{
		return (NULL);
	}

	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	for (k = 0; name[k] != '\0'; k++)
		new_dog->name[k] = name[k];
	new_dog->name[k] = '\0';
	new_dog->age = age;
	new_dog->owner = malloc(new_owner);

	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	for (k = 0; owner[k] != '\0'; k++)
		new_dog->owner[k] = owner[k];
	new_dog->owner[k] = '\0';
	return (new_dog);
}
