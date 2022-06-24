#include "main.h"
#include <stdlib.h>
/**
* free_grid - frees a 2 dimensional grid
* @grid: the grid
* @height: the array height
*Return: void function;
*
*
*/
void free_grid(int **grid, int height)
{
	int n;

	for (n = 0; n < height; n++)
	{
		free(grid[n]);
	}
	free(grid);
}
