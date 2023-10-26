#include "main.h"

/**
 * _memset - entry point
 * @s: destination
 * @b: constant
 * @n: bytes
 * Return: always 0 
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int p;

	for (p = 0; p < n; p++)
		s[p] = b;
	return (s);
}
