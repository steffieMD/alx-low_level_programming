#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * **alloc_grid - returns a pointer to a 2D array
 * @width: width of array
 * @height: height of the array
 * Return: NULL or pointer to 2D array
 */

int **alloc_grid(int width, int height)
{
	int **arr;
	int i, j;

	arr = malloc(sizeof(char) * width * height);

	if (width <= 0 || height <= 0 || arr == NULL)
	{
		return (NULL);
	}

	for (i = 1; i < width; i++)
	{
		for (j = 1; j < height; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return (0);
}
