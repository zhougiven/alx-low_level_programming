#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints the type struct dog.
 * @d: struct dog object to be printed.
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	if ((*d).name == NULL)
	{
		printf("Name: (nil)\n");
	}
	else
	{
		printf("Name: %s\n", d->name);
	}
	if (d->age == 0)
	{
		printf("Age: 0.000000\n");
	}
	else
	{
		printf("Age: %f\n", d->age);
	}
	if (d->owner == NULL)
	{
		printf("Onwer: (nil)\n");
	}
	else
	{
		printf("Owner: %s\n", d->owner);
	}
}
