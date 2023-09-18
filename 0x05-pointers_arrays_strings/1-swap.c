#include "main.h"
/**
 * swap_int - value for 2 ints
 * @a: swap int
 * @b: swap int
 */
void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
