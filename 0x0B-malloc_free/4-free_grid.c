#include "main.h"
#include <stdlib.h>
/**
 * free_grid - Frees 2dimensional grid created
 * @height: dimensional grid
 * @grid: grid
 * Return: 0
 */
void free_grid(int **grid, int height)
{
	int k;

	for (k = 0; k < height; k++)
		free(grid[k]);
	free(grid);
}
