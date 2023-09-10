#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Entering data for lowercase alphabet
 * Return: 0
 */
int main(void)
{
	char lowerCase;

	for (lowerCase = 'z'; lowerCase >= 'a'; lowerCase--)
		putchar(lowerCase);
	putchar('\n');

	return (0);
}
