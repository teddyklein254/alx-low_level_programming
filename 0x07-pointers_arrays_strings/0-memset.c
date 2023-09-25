#include "main.h"

/**
 * _memset - Filling the memory with constant byte
 * @n: bytes of memory
 * @s: direction where bytes are pointed to
 * @b: the byte for the pointer
 * Return: pointer s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;
	{
	if (s == '\0')
	return (0);
	}
	
	{
		for (x = 0; x < n; n++)
		s[x] = b;
	}
	return (s);
}
