#include "main.h"

/**
 * _memset - program fill a block memory
 * @s: starting addrees of memory to fill
 * @b: desired value
 * @n: number byte to change
 *
 * Return: change array new value for n byte
 */

char *_memset(char *s, char b, unsigned int n)
{
	int a = 0;

	for (; n > 0; a++)
	{
		s[a] = b;
		n--;
	}
	return (s);
}
