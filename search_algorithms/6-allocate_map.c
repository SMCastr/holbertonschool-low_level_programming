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

	map = malloc(sizeof(int *) * n); /*Allocate memory for 'n' row pointers.*/

	if (map == NULL)
	{
		perror("Memory allocation failed");
		return (NULL);
	}

	for (int i = 0; i < n; i++)
	{
		map[i] = malloc(sizeof(int) * m); /* Allocate memory for each row.*/

		if (map[i] == NULL)
		{
			perror("Memory allocation failed");

			/*If memory allocation for a row fails, free previously allocated rows.*/
			for (int j = 0; j < i; j++)
				free(map[j]);

			free(map);
			return (NULL);
		}
	}

	return (map);
}
