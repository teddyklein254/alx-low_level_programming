#include "main.h"
/**
 * _memcpy - Function for copying
 * @n: Bytes to be copied from
 * @src: Bytes that are copied
 * @dest: Bytes copied to
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int j;

	for(j = 0; j < n; j++)
		dest[j] = src[j];
	return (dest);
}
