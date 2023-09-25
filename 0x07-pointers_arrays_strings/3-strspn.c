#include "main.h"
#include <stddef.h>
#include <string.h>
/**
 * _strspn - function for getting lenghth of prefix substring
 * @s: initial segment of bytes
 * @accept: bytes from the s
 * Return: s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int y = 0;
	for (; *s != '\0' && strchr(accept, *s) != NULL; s++)
		y++;
	return (y);
}
