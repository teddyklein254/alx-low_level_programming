#include "main.h"
#include <string.h>

/**
 * _strcat - add two strings
 * @dest: input one
 * @src: input two
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	int dest_len, i;

	for (dest_len = 0; dest[dest_len] != '\0'; dest_len++)
		for (i = 0; i < i && src[i] != '\0'; i++)
			dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';
	return (dest);
}
