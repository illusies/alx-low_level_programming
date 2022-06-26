#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - function that returns a pointer to a
 * two-dimensional array of integers
 * @width: int
 * @height: int
 * Return: pointer
 */

int **alloc_grid(int width, int height)
{
	int **ray_of_int, i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	ray_of_int = malloc(sizeof(int *) * height);
	if (ray_of_int == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		ray_of_int[i] = malloc(sizeof(int) * width);

		if (ray_of_int[i] == NULL)
		{
			for (; i >= 0; i--)
			{
				free(ray_of_int[i]);
			}
			return (NULL);
		}

		for (j = 0; j <= width; j++)
		{
			ray_of_int[i][j] = 0;
		}
	}
	return (ray_of_int);
}

