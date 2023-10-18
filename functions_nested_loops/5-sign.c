#include "main.h"

/**
 * print_sign - Prints the sign of a number
 * @c: The number to be checked
 * @n: The number to be checked
 * Return: 1 for positive num, -1 for negative num or for anything else
 */

int print_sign(int n)
{
	if (n > 0)
	{
	_putchar(43);
	return (1);
}
else if (n < 0)
{
	_putchar(45);
	return (-1);
}
else
{
	_putcher(48);
	return (0);
}
}