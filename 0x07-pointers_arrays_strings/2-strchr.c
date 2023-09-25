#include <stdio.h>
#include "main.h"

/**
 * _strchr - string locator
 * @c: pointer to first occurence
 * @s: string
 * Return: NULL if character not found
 */
char *_strchr(char *s, char c)
{
	int y;

	for (y = 0; s[y] != '\0'; y++)
		if (s[y] == c)
			return (&s[y]);

	return (0);
}
