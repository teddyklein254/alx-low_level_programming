#include "main.h"
/**
 * _strlen - string length retard
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
	int longi = 0;

	while(*s != '\0')

		longi++;
	s++;
	return (longi);
}
