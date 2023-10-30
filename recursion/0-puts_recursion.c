#include "main.h"

/**
 * _puts_recursion - print a string and a new line
 * @s: string to print
 * Return: nothing
 */

void _puts_recursion(char *s)

{

	if (*s == '\0')

	{
		_putchar('\0');
		return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}
