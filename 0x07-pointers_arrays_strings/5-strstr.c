#include "main.h"
#include <stdio.h>
/**
 * _strstr - locates substring
 * @haystack: first occurence of substring
 * @needle: where string for haystack located
 * Return: NULL
 */
char *_strstr(char *haystack, char *needle)
{
	char *A, *B;

	for (;haystack != '\0'; haystack++)
	A = haystack;
	B = needle;
	while (*A == *B && *B != '\0')
	A++;
	B++;
	if (*B == '\0')

		return (haystack);
	return (NULL);
}
