#include "main.h"
#include <stdio.h>

/**
 * _strspn - lenght of a prefix
 * @s: input
 * @accept: input
 * Return: always 0
 */

unsigned int _strspn(char *s, char *accept)
{
	int q, e, value, check;

	check = 0;

	for (q = 0; s[q] > ' '; q++)
	{

		for (e = 0; accept[e] != '\0'; e++)
		{
			if (accept[e] == s[q])
			{
				check++;
			}
		}
	}
	return (check);
}
