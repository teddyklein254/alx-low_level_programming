#include "main.h"
#include <stdio.h>

/**
 * _strncat - function similar to strcat with n bytes
 * @src: it uses bytes to _strncat
 * @n: number that to be concatenated
 * @dest: Result for pointer
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len, k;

	for (dest_len = 0; dest[dest_len] != '\0'; dest_len++)
	for (k = 0; k < n && src[k] != '\0'; k++)
		dest[dest_len + k] = src[k];
	dest[dest_len + k] = '\0';
	return (dest);
}
