#include "main.h"
#include <stdio.h>
/**
 * factorial - factorial number that is given
 * @n: number of factorials
 * Return: -1
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n <= 1)
		return (1);
	return (n * factorial (n - 1));
}
