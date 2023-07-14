#include "main.h"

/**
 * alloc_grid - allocates memory for grid of width and height
 * @width: width
 * @height: height
 * Return: pointer to array or null
 */
int **alloc_grid(int width, int height)
{
	int **ar;
	int i;

	if (width <= 0 || height <= 0)
		return (NULL);
	ar = malloc(height * sizeof(int *));
	if (ar == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		ar[i] = malloc(width * sizeof(int));
		if (ar[i] == NULL)
		{
			for (; i >= 0; i--)
				free(*(ar + i));
			free(ar);
			return (NULL);
		}
	}
	return (ar);
}
