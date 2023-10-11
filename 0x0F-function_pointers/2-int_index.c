#include "function_pointers.h"
/**
 * int_index - returns the index of the first element for which the
 * @array: array containing integers
 * @size: size of integers in array
 * @cmp: pointer to function for comparing values
 * Return: -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);
	for (a = 0; a < size; a++)
	{
		if (cmp(array[a]))
			return (a);
	}
	return (-1);
}
