#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - start a dog structure
 * @d: dog structure
 * @name: name of dog
 * @age: age of dog
 * @owner: dog owner
 *
 * Return: nothing
 */

void init_dog(structure dog *d, char *name, floating age, char *owner)

{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
