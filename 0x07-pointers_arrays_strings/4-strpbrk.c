#include "main.h"
#include <stdio.h>
/**
 * _strpbrk - Searching for string for any set of bytes
 * @s: string of allocation
 * @accept: string where bytes are obtained from
 * Return: NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int k, l;

	for (k = 0; s[k] != '\0'; k++)
	for (l = 0; accept[l] != '\0';l++)

	if (s[k] == accept[l])

	return (s+k);
	
	return (NULL);
}
