#include "main.h"

/**
 * factorial - calculate factorial number
 * @n: number to calculate
 * Return: value of int
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n <= 1)
		return (1);
	return (n * factorial(n - 1));
}
