#include "main.h"
#include <stdlib.h>

/**
 * create_array - create array of char
 * @size: size of the array
 * @c: char to fill array
 * Retrun: array filled
 */

char *create_array(insigned int size, char c)

{
	unsigned int i;
	char *s;

	if (size == 0)
		return (NULL);

	s = malloc(size * sizeof(char));

	if (s == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}
	return (s);
}
