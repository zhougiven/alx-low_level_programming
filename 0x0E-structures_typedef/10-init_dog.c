#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initializes the variable of type struct dog.
 * @d: address of the structure.
 * @name: address of the name.
 * @age: address of the member age in struct dog.
 * @owner: address of the member owner in struct dog.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog ptr = {name, age, owner};
	d = &ptr;
}

