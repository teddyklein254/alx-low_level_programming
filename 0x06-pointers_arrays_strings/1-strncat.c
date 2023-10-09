#include "main.h"
#include <string.h>

/**
 * _strncat - function similar to strcat with n bytes
 * @src: it uses bytes to _strncat
 * @n: number that to be concatenated
 * @dest: Result for pointer
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;
	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];
	return (dest);
}
