#include "main.h"
#include <stdlib.h>

/**
 * _strdup - pointer to a newly allocated space in memory,
 * @str: string given as parameter
 * Return: NULL
 */
char *_strdup(char *str)
{
	char *teddy;
	int a, b = 0;

	if (str == NULL)
		return (NULL);
	a = 0;
	while (str[a] != '\0')
		a++;
	teddy = malloc(sizeof(char) * (a + 1));
	if (teddy == NULL)
		return (NULL);
	for (b = 0; str[a]; b++)
		teddy[a] = str[b];
	return (teddy);
}
