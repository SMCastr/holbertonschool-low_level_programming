#include "main.h"

/**
 * free_grid - frees allocated grid
 * @grid: the pointer the  grid
 * @height: height
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
		return;
	for (i = 0; i <= height; i++)
	{
		free(*(grid + i));
	}
	free(grid);
}
