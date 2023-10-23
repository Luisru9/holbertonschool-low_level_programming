#include "main.h"
#include <stdio.h>

/**
 * print_rev - Prints a string in reverse
 * @m: The string to print
 * Return: void
 */

void print_rev(char *m)
{
	int c = 0;
	
	while (m[c] != '\0')
	{
		c++;
	}
	for (c -= 1; c >= 0; c--)
	{
		_putchar(m[c]);
	}
	_putchar('\n');
}
