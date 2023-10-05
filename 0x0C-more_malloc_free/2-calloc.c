#include "main.h"
/**
 * _memset - memory thet is being set
 * @s: number of strings
 * @b: characters to be copied
 * @n: copied
 * Return: NULL
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		s[a] = b;
	return (s);
}
/**
 * _calloc - copies memory that is being allocated
 * @nmemb: memory that is copied from to
 * @size: number of bytes or memoery storage for allocated
 * Return: NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(size * nmemb);
	if (ptr == NULL)
		return (NULL);
	_memset(ptr, 0, nmemb * size);
	return (ptr);
}
