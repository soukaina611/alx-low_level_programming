#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *free_grid - function frees a 2 dimensional grid
 *@grid:two dimensional grid
 *@height:height dimension grid
 *Return:void
*/

void free_grid(int **grid, int height)
{
int a;

for (a = 0; a < height ; a++)
{
free(grid[a]);
}
free(grid);
}
