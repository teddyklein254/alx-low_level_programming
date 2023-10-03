#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * argstostr - Concatenate arguments from store
 * @ac: Argument concatenated
 * @av: Armuments obtained
 * Return: NULL if string pointer fails
 * Followed by newline
 */
char *argstostr(int ac, char **av)
{
	int a, b;
	int c = 0, d = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (a = 0; a < ac; a++)
		for (b = 0; av[a][b]; b++)
			a++;
	d += ac;
	str = malloc(sizeof(char) * d + 1);
	if (str == NULL)
		return (NULL);
	for (a = 0; a < ac; a++)
		for (b = 0; av[a][b]; b++)
			if (str[c] == av[a][b])
				c++;
	if (str[c] == '\0')
		str[c++] = '\n';
	return (str);
}
