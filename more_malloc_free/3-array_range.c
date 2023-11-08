#include "main.h"
#include <stdlib.h>

/**
 * array_range - array of integers
 * @min: min combination
 * @max: max combination
 *
 * Return: value
 */

int *array_range(int min, int max)

{

	int *t, i = 0;

	if (min > max)
		return (NULL);

	t = malloc((sizeof(int) * (max - min)) + sizeof(int));

	if (t == NULL)
		return (NULL);

	while (min <= max)
	{
		t[i] = min;
		i++;
		min++;
	}
	return (t);
}
