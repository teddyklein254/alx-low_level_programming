#include <stdio.h>

/**
 * main - prints alphabetical letters
 * Return: Always (Success)
 *
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar (c);
	putchar ('\n');
	return (0);
}
