#include "main.h"

/**
 * _strcmp - compares two number of strings
 * @s: string compared
 * Return: 0
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && s2 && *s1 == *s2)
		s1++;
	s2++;
	return (*s1 - *s2);
}
