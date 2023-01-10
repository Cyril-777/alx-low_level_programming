#include "main.h"
/**
 * free_grid - free
 * @grid: ptr
 * @height: rows
 **/
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
