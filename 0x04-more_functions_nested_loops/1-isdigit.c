#include <stdio.h>

/**
 * check - code for returning is digit
 * @c is digit return 1 else 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return 1;
	else
		return 0;
}
