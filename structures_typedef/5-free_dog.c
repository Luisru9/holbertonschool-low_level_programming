#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - free dog
 * @d: variable for inf
 *
 * Return: nothing
 */

void free_dog(dog_t *d)

{
	if (d != NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
