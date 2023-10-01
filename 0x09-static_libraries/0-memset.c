#include "main.h"
/**_memset - memory to values
 * @s: string for address
 * @b: value
 * @n: bytes
 * Return: array for new values
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0, i++)
		s[i] = b;
	n--;
	return (s);
}

