#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * string_nconcat - concatenating two strings
 * @s1: string number1
 * @s2: string number2
 * @n: number of characters
 * Return: NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int a = 0, b = 0, num1 = 0, num2 = 0;
	
	while (s1 && s1[num1])
		num1++;
	while (s2 && s2[num2])
		num2++;
	if (n < num2)
		s = malloc(sizeof(char) * (num1 + n + 1));
	else
		s = malloc(sizeof(char) * (num1 + num2 + 1));
	if (!s)
		return (NULL);
	while (a < num1)
		s[a] = s1[a];
	while (n < num2 && a < (num1 + n))
		s[a++] = s1[b++];
	while (n >= num2 && a < (num1 + num2))
		s[a++] = s2[b++];
	s[a] = '\0';
	return (s);
}
