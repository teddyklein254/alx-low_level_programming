#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - executes repeator of the array
 * @size: size of the array
 * @action: command for doing the execution or terminator
 * Return: 0
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;

	if (array == NULL || action == NULL)
		return;
	for (a = 0; a < size; a++)
	{
		action(array[a]);
	}
}
