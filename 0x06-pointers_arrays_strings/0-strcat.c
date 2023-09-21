#include "main.h"
#include <stdio.h>

/**
 * _strcat - concatenates strings
 * @dest: gives concated string
 * @src: location of string
 * Return: Always Success
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
	return (dest);
}
