#include "main.h"

/**
 * **alloc_grid - unction that returns a pointer to a 2 dimensional
 * array of integers
 * @width: int
 * @height: int
 * Return: The function should return NULL on failure
 */

int **alloc_grid(int width, int height)
{
	int **ptr, n, m;

	ptr = malloc(sizeof(*ptr) * height);

	if (width <= 0 || height <= 0 || ptr == 0)
	{
		return (NULL);
	}
	else
	{
		for (n = 0; n < height; n++)
		{
			ptr[n] = malloc(sizeof(**ptr) * width);
			if (ptr[n] == 0)
			{
				while (n--)
					free(ptr[n]);
				free(ptr);
				return (NULL);
			}

			for (m = 0; m < width; m++)
				ptr[n][m] = 0;
		}
	}

	return (ptr);
}
