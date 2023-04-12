#include "main.h"

/**
 * free_grid - description
 * @grid: grid of memories
 * @height: int
 * Return: Nothing
 */

void free_grid(int **grid, int height)
{
	int n = 0;

	for (; n < height; n++)
		free(grid[n]);
	free(grid);
}
