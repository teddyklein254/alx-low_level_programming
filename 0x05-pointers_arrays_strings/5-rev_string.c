#include "main.h"

/**
 * rev_string - reversing string
 * @s: input
 * Return: Reversed string
 */
void rev_string(char *s)
{
	char temp = s[0];
	int begin = 0;
	int stop;

	if (s)
	{

	while (s[stop] != '\0')
	{
	stop++;
	}
	stop--;
	while (begin < stop)
	{
		temp = s[begin];
		s[begin] = s[stop];
		s[stop] = temp;

		begin++;
		stop--;
	}
	}
}
