#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Return: 0 (Success)
 */
int main(void)
{
	char lowerCase, upperCase;
	for (lowerCase = 'a'; lowerCase <= 'z'; lowerCase++)
		putchar(lowerCase);
	for (upperCase = 'A'; upperCase <= 'Z'; upperCase++)
		putchar(upperCase);
	putchar('\n');
		return (0);
}
