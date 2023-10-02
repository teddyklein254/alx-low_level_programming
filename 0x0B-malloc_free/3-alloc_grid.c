#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * alloc_grid - 2 dimensional array
 * @width: width grid
 * @height: height grid
 * Return: NULL
 */
int **alloc_grid(int width, int height)
{
	int **mee, a, b;

	if (width <= 0 || height <= 0)
		return (NULL);
	mee = malloc(sizeof(int *) * height);
	if (mee == NULL)
		return (NULL);
	for (a = 0; a < height; a++)
		mee[a] = malloc(sizeof(int) * width);
	if (mee[a] == NULL)
		for (b = 0; b < width; b++)
			free(mee[b]);
	free(mee);
	return (NULL);

	for (a = 0; a < height; a++)
		for (b = 0; b < width; b++)
			mee[a][b] = 0;
	return (mee);
}
