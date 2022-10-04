#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - 2 dimensionals arrays of integers
 * @col: number of columns
 * @row: number of rows
 * Return: null on failure
 */

int **alloc_grid(int col, int row)
{
	int j, k, **grid;

	grid = malloc(row * sizeof(*grid));

	if (row < 1 || col < 1 || grid == 0)
		return (NULL);

	for (j = 0; j < row; j++)
	{
		grid[j] = malloc(col * sizeof(**grid));

		if (grid[j] == 0)
		{
			while (j--)
				free(grid[j];
						free(grid);
						return (NULL);
		}
			for (k = 0; k < col; k++)
				grid[j][k] = 0;
	}
						return (grid);
}
