#include "main.h"

/**_strncat - add string
 * @dest: value
 * @src: value two
 * @n: input
 * Return: dest
 */
char *strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = o;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (j < n && src[i] != '\0')
		dest[i] = src [j];
	i++;
	j++;

	dest[i] = '\0';
	return (dest);
}
