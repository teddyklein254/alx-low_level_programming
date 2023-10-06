#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * _realloc - reallocates memory block
 * @ptr: pointer to the previous allocated to call malloc
 * @old_size: memory bytes or the size of bytes
 * @new_size: new size of bytes allocated to memory for space
 * Return: 1
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptr1;
	char *old_ptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (!ptr)
	{
		ptr1 = malloc(new_size);
	if (!ptr1)
	{
		return (NULL);
	}
	return (ptr1);
	}
	old_ptr = ptr;
	ptr1 = malloc(new_size);
	if (!ptr1)
	{
		return (NULL);
	}
	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
		{
			ptr1[i] = old_ptr[i];
		}
	}
	else
	{
		for (i = 0; i < old_size; i++)
		{
			ptr1[i] = old_ptr[i];
		}
	}
	free(ptr);
	return (ptr1);
}
