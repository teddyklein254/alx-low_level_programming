#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - Searching for string for any set of bytes
 * @s: string of allocation
 * @accept: string where bytes are obtained from
 * Return: NULL
 */
char *_strpbrk(char *s, char *accept)
{
	char *ptr;

	if (s == NULL || accept == NULL)
		return(NULL);

	while (*s != '\0')
		ptr = accept;
	while (*ptr != '\0')
		if (*s == *ptr)
			return s;
	ptr++;

	s++;

	return (NULL);
}

