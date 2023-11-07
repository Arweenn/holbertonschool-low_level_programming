#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - return a pointer to a 2 dimensional array of integers
 * @width: number of columns
 * @height: number of rows
 * Return: pointer to a 2 dimensional array
 */

int **alloc_grid(int width, int height)
{
	int i, **g;

	if (width <= 0 || height <= 0)
		return (NULL);

	g = (int **) malloc(height * sizeof(int *));

	if (g == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		g[i] = (int *) malloc(width * sizeof(int));

		if (g[i] == NULL)
		{
			while (i >= 0)
			{
				free(g[i]);
				i--;
			}
			free(g);
			return (NULL);
		}
	}
	return (g);
}
