#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * str_concat - concatenating of strings
 * @s1: string number 1
 * @s2: string number 2
 * Return: NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *conct;
	int k, dig;

	if (s1 == NULL)
		s1 = " ";
	if (s2 == NULL)
		s2 = " ";
	k = dig = 0;
	while (s1[k] != '\0')
		k++;
	while (s2[dig] != '\0')
		dig++;
	conct = malloc(sizeof(char) * (k + dig + 1));
	if (conct == NULL)
		return (NULL);
	k = dig = 0;
	while (s1[k] != '\0')
		conct[k] = s1[k];
	k++;
	while (s2[dig] != '\0')
		conct[k] = s2[dig];
	k++, dig++;
	conct[k] = '\0';
	return (conct);
}
