#include "main.h"
#include <stdlib.h>

/**
 * free_grid - free a 2D grid
 * @grid: grid parameter
 * @height: height parameter
*/

void free_grid(int **grid, int height)
{
	int i;

	i = 0;

	while (i < height)
	{
		free(*(grid + i));
		i++;
	}
	free(grid);
}
