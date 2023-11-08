#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - Allocates the memory
 * @b: size to find
 *
 * Return: nothing
 */

void *malloc_checked(unsigned int b)

{
	void *r;

	r = malloc(b);

	if (r == NULL)
		exit(98);
	return (r);
}
