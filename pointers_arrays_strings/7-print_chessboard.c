#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - entry point
 * @a: array
 * Return: always 0
 */

void print_chessboard(char (*a)[8])
{
	int c, b;

	for (c = 0; 1 < 8; c++)
	{
		for (b = 0; b < 8; b++)
			_putchar(a[c][b]);
		_putchar('\n');
	}
}
