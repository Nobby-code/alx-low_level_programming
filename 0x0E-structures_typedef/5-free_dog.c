#include <stdio.h>
#include "dog.h"

/**
 *free_dog - function to free memory
 *@d: dog structure
 *
 *Return : Void
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
