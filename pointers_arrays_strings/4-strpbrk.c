#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - entry point
 * @s: input
 * @accept: input
 * Return: always 0
 */

char *_strpbrk(char *s, char *accept)
{
	int u, f;

	for (u = 0; s[u] != '\0'; u++)
	{
		for (f = 0; accept[f] != '\0'; f++)
		{
			if (s[u] == accept[f])
				return (s + u);
		}
	}
	return (NULL);
}
