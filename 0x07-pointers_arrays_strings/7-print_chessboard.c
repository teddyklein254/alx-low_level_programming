#include "main.h"
#include <stdio.h>
/**
 * print_chessboard - prints chessboard
 * @a: assigned
 * Return: 0
 */
void print_chessboard(char (*a)[8])
{
	int num1, num2;

	for (num1 = 0; num1 < 8; num1++)
		for (num2 = 0; num2 < 8; num2++)
		putchar(a[num1][num2]);
	for (num2 = 8; num2 < 72; num2++)
		putchar(' ');
	putchar('\n');
}
