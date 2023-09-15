#include "main.h"
#include <stdio.h>
/**
 * main - code for printing numbers ten times
 * Return: 0
 */
void more_numbers(void)
{
	int num1, num2;
	for (num2 = 0; num2 < 9; num2++)
		for (num1 = 0; num1 <= 14; num1++)
		printf("%d", num1);
	printf("\n");
}
