#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @c: characters used that are specific
 * @size: initializer for the array
 * Return: NULL
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int k;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);
	for (k = 0; k < size; k++)
		str[k] = c;
	return (str);
}
