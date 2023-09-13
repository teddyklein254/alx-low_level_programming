#include <stdio.h>

/**
 * print_alphabet_x10 - Printing alphabet 10 times
 * Return: 0
 */
void print_alphabet_x10(void)
{
	char alphabets;
	int times = 0;

	for (times = 0; times < 10; times++)
		for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
		putchar(alphabets);
	putchar('\n');
	return (0);
}
