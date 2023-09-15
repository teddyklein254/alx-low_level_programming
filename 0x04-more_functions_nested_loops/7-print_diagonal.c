#include "main.h"
#include <stdio.h>

/** print diagonal - for the terminal
 * @n: number of times of diagonal
 * Return: 0
 */
void print_diagonal(int n)
{
	int i;

	if (n <= 0)
	{
	putchar('\n');
	}
       	else 
	{
		for (i = 1; i <= n; i++)
	{
	putchar(' ', i - 1);
	putchar('\\');
	putchar('\n');
        }
    }
}
