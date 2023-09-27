#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - raising to the power of
 * @x: value to be returned
 * @y: the power to be raised to
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
			if (y == 0)
		return (1);
	return (x * _pow_recursion (x, y - 1));
}
