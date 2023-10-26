#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - entry point
 * @a: array
 * Return: always 0
 */

void print_chessboard(char (*a)[8])
{
	int y;
	int j;

	for (y = 0; y < 8; y++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[y][j]);
		}
		_putchar('\n');
	}
}
