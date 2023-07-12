#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - ...
 * @width: ...
 * @height: ...
 *
 * Return: ...
 */

int **alloc_grid(int width, int height)
{
	int z, j, k, h;
	int **a;

	if (width <= 0 || height <= 0)
		return (NULL);

	a = malloc(sizeof(int *) * height);

if (a == NULL)
{
free(a);
return (NULL);
	}

	for (z = 0; z < height; z++)
	{
		a[z] = malloc(sizeof(int) * width);

		if (a[z] == NULL)
		{
			for (j = z; j >= 0; j--)
			{
				free(a[j]);
			}

			free(a);
			return (NULL);
		}
		for (k = 0; k < height; k++)

		{
			for (h = 0; h < width; h++)
			{
				a[k][h] = 0;
			}
		}
	}
return (a);
	}
		
