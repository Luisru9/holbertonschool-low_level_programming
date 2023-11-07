#include "main.h"
#include <stdlib.h>

/**
 * _strdup - duplicate a string
 * @str: string to duplicate
 *
 * Return: duplicated string
 */

char *_strdup(char *str)

{
	int u = 0, k = 1;
	char *e;

	if (str == NULL)
		return (NULL);

	while (str[k])
	{
		k++;
	}

	e = malloc((sizeof(char) * k) + 1);

	if (e == NULL)
		return (NULL);

	while (u < k)
	{
		e[u] = str [u];
		u++;
	}

	e[u] = '\0';
	return (e);
}
