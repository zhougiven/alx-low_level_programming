#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees memory allocated to d.
 * @d: structure object.
 */


void free_dog(dog_t *d)
{
	free(d->name);
	free(d);
	free(d->owner);
}
