#include "main.h"

/**
 * rev_string - reversing string
 * @s: input
 * Return: Reversed string
 */
void rev_string(char *s)
{
	char temp = s[0];
	int counter = 0;
	int i;

	while (s[counter] != '\0')
	counter++;
	counter--;
	for (i = 0; i < counter; i++)
		counter--;
	temp = s[i];
	s[i] = s[counter];
	s[counter] = temp;
}
