#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - point of inputs
 * Return: 0
 */
int main(void)
{
	int firstDigit;

	for (firstDigit = '0'; firstDigit <= '9'; firstDigit++)
		putchar(firstDigit);
	if (firstDigit != '9')
	{
		putchar(',');
	putchar(' ');
	}
	putchar('\n');
	return (0);
}
