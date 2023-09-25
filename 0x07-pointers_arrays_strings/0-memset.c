#include "main.h"

/**
 * _memset - Filling the memory with constant byte
 * %n: bytes of memory
 * %s: direction where bytes are pointed to
 * %b: the byte for the pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; n++)
		s[n] = b;
	return (s);
}
