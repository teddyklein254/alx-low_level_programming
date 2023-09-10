#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entering data used for the abse
 * Return: 0
 */
int main(void)
{
	int baseNumber;
	char lowerCase;

	for (lowerCase = '0'; baseNumber <= '9'; baseNumber++)
		putchar(baseNumber);
	for (lowerCase = 'a'; baseNumber <= 'f'; lowerCase++)
		putchar(lowerCase);
	putchar('\n');

	return (0);
}
