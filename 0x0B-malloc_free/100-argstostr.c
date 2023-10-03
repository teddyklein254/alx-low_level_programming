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
	int a, b, c = 0;
	int store_string = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (a = 0; a < ac; a++)
		for (b = 0; av[a][b]; b++)
			store_string++;
	store_string++;
	str = malloc(sizeof(char) * store_string + 1);
	if (str == NULL)
		return (NULL);
	for (a = 0; a < ac; a++)
		for (b = 0; av[a][b]; b++)
			(str[c] == av[a][b])
				str[c++] = '\n';
	str[c] == '\0';
	return (str);
}
