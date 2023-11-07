#include "main.h"
#include <stdlib.h>

/**
 * free_grid - grid of integers
 * @grid: dimesional grid
 * @height: ^^
 *
 * Return: nothing
 */

void free_grid(int **grid, int height)

{
	int g;

	for (g = 0; g < height; g++)
	{
		free(grid[g]);
	}
	free(grid);
}
