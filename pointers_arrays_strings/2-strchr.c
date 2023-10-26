#include "main.h"
#include <stdio.h>

/**
 * _strchr - function to locate
 * @s: input string
 * @c: input pointer
 * Return: always 0
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
{
	if (s[i] == c)
		return (s + i);
}

return (NULL);
}
