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
	char ptr;
	if (s == NULL || accept == NULL)
		return (NULL);

	while (*s != '\0')

	char *ptr = accept;

	while (*ptr)
		if (*s == *ptr)
			return (s);
	ptr++;

	s++;

	return (NULL);
}

