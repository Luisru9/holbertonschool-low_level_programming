#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocate memory
 * @nmemb: number of members
 * @size: size
 *
 * Return: nothing
 */

void *_calloc(unsigned int nmemb, unsigned int size)

{
	int w = 0,  o = 0;
	char *y;

	if (nmemb == 0 || size == 0)
		return (NULL);

	o = nmemb * size;
	y = malloc(o);

	if (y == NULL)
		return (NULL);

	while (w < o)
	{
		y[w] = 0;
		w++;
	}
	return (y);
}
