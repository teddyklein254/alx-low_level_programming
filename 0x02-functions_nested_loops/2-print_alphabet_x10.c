#include <stdio.h>

/**
 * main - Printing alphabet 10 times
 * Return: 0
 */
void print_alphabet_x10(void)
{
	char alphabets;
	int times = 0;
	while(times <= '9')
		for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
			putchar(alphabets);
				putchar('\n');
				alphabets++;
}
