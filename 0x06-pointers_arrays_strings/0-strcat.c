#include "main.h"
#include <stdio.h>

/**
 * _strcat - concatenates strings
 * @s: gives concated string
 * Return: 1
 */
char *_strcat(char *dest, char *src)
{
	while (*dest != '\0')
		dest++;
	while (*src != '\0')
		*dest = *src;
	dest++;
	src++;

	*dest = '\0';
	return dest;
}
