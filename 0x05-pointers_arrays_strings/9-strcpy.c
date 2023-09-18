#include "main.h"

/**
 * char *_strcpy - copies string from the src
 * @dest:  copying diretion  to
 * @src: direction obtained from
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int x = 0;

	while (*(src + l) != '\0')
		l++;
	for (; x < l ; x++)
		dest[x] = src[x];
	dest[l] = '\0';
	return (dest);

}
