#include "dog.h"
#include <studio.h>

/**
 * print_dog - prints struct dog
 * @d: pointer to struct dog type
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		if (d->name != NULL)
		{
			printf("Name: %s\n", d->name);
			printf("Age: %f\n", d->age);
		}
		else
		{
			printf("Name: (nil)\n");
		}

		if (d->owner != NULL)
		{
			printf("Owner: %s\n", d->owner);
		}
		else
		{
			printf("Owner: (nil)\n");
		}
	}
}
