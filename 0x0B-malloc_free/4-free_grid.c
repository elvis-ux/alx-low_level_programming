#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - free 2 dimensional grid
 * @grid: pointer
 * @row: row of the array
 * Return: --
 */

void free_grid(int **grid, int row)
{
	int i;

	for (i = 0; i < row; i++)
		free(grid[i]);
	free(grid);
}
