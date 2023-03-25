#include <stdio.h>
#include <string.h>
#include <stdlib.h>
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
	d->name = (char *)malloc((sizeof(char)) * (strlen(name) + 1));
	d->owner = (char *)malloc((sizeof(char)) * (strlen(owner) + 1));
	strcpy(d->name, name);
	d->age = age;
	strcpy(d->owner, owner);
}
