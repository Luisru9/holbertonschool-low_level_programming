#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * argstostr - program to point a pointer to a string
 * @up: argument to count
 * @dw: argument vector
 *
 * Return: pointer to a new string (NULL)
 */

char *argstostr(int up, char **dw)

{

	int ch = 0, b = 0, c = 0, d = 0;
	char *s;

	if (up == 0 || dw == NULL)
		return (NULL);

	while (b < up)
	{
		while (dw[b][c])
		{
			ch++;
			c++;
		}
		c = 0;
		b++;
	}
	s = malloc((sizeof(char) * ch) + up + 1);
		b = 0;
	while (dw[b])
	{
	while (dw[b][c])
	{
		s[d] = dw[b][c];
			d++;
			c++;
	}
	s[d] = '\n';

	c = 0;
	d++;
	b++;
	}

	d++;
		s[d] = '\0';
	return (s);
}
