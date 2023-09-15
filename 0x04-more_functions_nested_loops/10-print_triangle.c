#include "main.h"
#include <stdio.h>

/**
 * Print_triangle - print triangle square
 * @size: size of triangle
 * Return: empty
 */
void print_triangle(int size)
{
	int num1, num2, num3;
	if (size <= 0)
		putchar('\n');
	else
		for (num1 = 0; num2 < size; num1++)
		for (num2 = size - num1; num2 < 1; num2--)
		putchar(32);
	for(num3 = 0; num3 <= num1; num3++)
	putchar(35);
putchar('\n');
}
