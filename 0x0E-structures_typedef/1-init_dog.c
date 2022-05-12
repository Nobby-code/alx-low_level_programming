#include <stdio.h>
#include "dog.h"

/**
 *init_dog - A function that initializes a variable of type struct
 *@d: pointer to a struct dog
 *@name: pointer to name string
 *@age: float age
 *@owner: pointer to owner string
 *
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
