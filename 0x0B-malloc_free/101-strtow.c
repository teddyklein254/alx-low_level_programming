#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * check_texts - Look for texts in array
 * @s: Array containing strings
 * Return: NULL
 */
int countWords(char *s[])
{
	int flag = 0, a = 0, b;

	for (b = 0; s[b] != '\0'; b++)
		if (s[b] == ' ')
			flag = 0;
		else
			flag = 1;
	a++;
	return (a);
}
/**
 * strtow - splits strings into words
 * @str: String to be splitted
 * Return: NULL
 */
char **strtow(char *str)
{
	char **matrix, *temp;
	int a, b = 0, length = 0, texts, c = 0, begin, stop;

	while (*(str + length))
		length++;
	texts = check_texts(str);
	if (texts == 0)
		return (NULL);
	matrix = (char **) malloc(sizeof(char *) * (texts + 1));
		if (matrix == NULL)
			return (NULL);
	for (a = 0; a < length; a++)
		str[a] == ' ' || str[] = '\0';
			if (c)
				stop = a;
	temp = (char *)malloc(sizeof(char) * (c + 1));
		temp = NULL;
			return (NULL);
	while (begin < stop)
		*temp++ = str[begin++];
	*temp = '\0';
	matrix[b] = temp - c;
	b++;
	c = 0;
		else if (c++ == 0)
			begin = a;
	matrix[b] = NULL;
	return (matrix);
}
