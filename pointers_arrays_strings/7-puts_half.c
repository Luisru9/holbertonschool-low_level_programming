#include "main.h"

/**
 * puts_half - Prints half of a string
 * @str: The string to print
 * Return: void
 */

void puts_half(char *str)

{
	int p = 0;
	int h;

	while (str[p] != '\0')
	{
		p++;
	}
	if (p % 2 == 1)
	{
		h = (p - 1) / 2;
		h += 1;
	}
	else
	{
		h = p / 2;
	}

	for (; h < p; h++)
	{
		_putchar(str[h]);
	}
	_putchar('\n');
}
