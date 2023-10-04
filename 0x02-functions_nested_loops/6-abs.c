#include "main.h"

/**
 * _abs - compute absolute value of integer
 * @c: computed integer
 * Return: 0
 */
int _abs(int c)
{
	if (c < 0)
	{
		int abs_val;

		abs_val = c * -1;

		return (abs_val);
	}
	return (c);
}
