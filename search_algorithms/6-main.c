
#include <stdio.h>
#include <stdlib.h>

/**
 * allocate_map - Allocates memory for a 2D array (map).
 * @n: Number of rows in the map.
 * @m: Number of columns in the map.
 *
 * Return: A pointer to the allocated 2D array (map).
 */
int **allocate_map(int n, int m)
{
	int **map;

	map = malloc(sizeof(int *) * n);
	for (size_t i = 0; i < n; i++)
	{
		map[i] = malloc(sizeof(int) * m);
	}
	return (map);
}
