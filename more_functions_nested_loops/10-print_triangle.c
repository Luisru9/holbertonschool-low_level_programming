#include "main.h"

/**
 * print_triangle - Prints a triangle of squares according parameter
 * @size: The size of the squares triangle
 * Return: empty
 */

void print_triangle(int size)

{

	int g, s, p,

		if (size <= 0)
		{
			_putchar('\n');
		}
		else
		{
			for (g = 0; g < size; g++)
			{
				for (s = size - g; s > 1; s--)
				{
					_putchar(32);
				}
				for (p = 0; p <= g; p++)
				{
					_putchar(35);
				}
				_putchar('\n');
			}
		}
}
