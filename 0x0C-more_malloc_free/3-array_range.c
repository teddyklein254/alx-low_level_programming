#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * array_range - creates array of integers
 * @min: minimum number of integers
 * @max: maximum number of integers
 * Return: NULL
 */
int *array_range(int min, int max)
{
	int *ptr;
	int a, size;
	
	if (max < min)
	{
		return (NULL);
	}
	size = max - min + 1;
	ptr = malloc(sizeof(int) * size);

	if (ptr == NULL)
	{
		return (NULL);
	}
	for (a = 0; a <= size; a++)
	{
		ptr[a] = min++;
	}
	return (ptr);
}
