#include "main.h"
#include <stdio.h>

/**
 * _strspn - lenght of a prefix
 * @s: input
 * @accept: input
 * Return: always 0
 */

unsigned int _strspn(char *s, *accept)

{
	unsigned int k, h, value, check;
	
	value = 0;
	
	for (i = 0; s[i] != '\0';  k++)
	{
		check = 0;
		
		for (n = 0; accept[n] != '\0'; h++)
		{
			if (accept[n] == s[i])
			{
				value++;
				check = 1;
			}
		}
	}
	return (0);
}

