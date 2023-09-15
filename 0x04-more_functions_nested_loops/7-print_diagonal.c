#include "main.h"
#include <stdio.h>
/** print diagonal - for the terminal
 * @n: number of times of diagonal
 * Return: 0
 */
void print_diagonal(int n)
{
	int x, y;

	if (n <= 0)
		putchar('\n');
	else
		for (x = 0; x < n; x++)
			for (y = 0; y < x; y++)
				putchar(32);
	putchar(92);
	putchar('\n');
}
