#include <stdio.h>

/**
 * Function - void
 * Print_alphabet - Printing alphabet in lowercase
 * Return: 0.
 */
void print_alphabet(void)
{
	char lowerCase;

	for (lowerCase = 'a'; lowerCase <= 'z'; lowerCase++)
		putchar(lowerCase);
	putchar('\n');
}
